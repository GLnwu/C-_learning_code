/*************************************************************************
    > File Name: frnd2tmp.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 10 Sep 2017 03:33:21 PM CST
 ************************************************************************/
// template class with non-template friends
#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class HasFriend {
 private:
  T item;
  static int ct;
 public:
  explicit HasFriend(const T & i) : item(i) { ct++; }
  ~HasFriend() { ct--; }
  friend void counts();
  friend void reports(const HasFriend<T> & hf);  // template parameter
};

// each specialization has its own static data member
template <typename T>
int HasFriend<T>::ct = 0;

// no-template friend to all HasFriend<T> classes
void counts() {
  cout << "int count: " << HasFriend<int>::ct << "; ";
  cout << "double count: " << HasFriend<double>::ct << endl;
}

// no-template friend to The HasFriend<int> class
void reports(const HasFriend<int> & hf) {
  cout << "HasFriend<int>: " << hf.item << endl;
}

// no-template friend to the HasFriend<double> class
void reports(const HasFriend<double> & hf) {
  cout << "HasFriend<double>: " << hf.item << endl;
}

int main() {
  cout << "No objects declared: ";
  counts();
  HasFriend<int> hfi1(10);
  cout << "After hfi1 declared: ";
  counts();
  HasFriend<int> hfi2(20);
  cout << "After hfi2 declared: ";
  counts();
  HasFriend<double> hfdb(10.5);
  cout << "After hfdb declared: ";
  counts();
  reports(hfi1);
  reports(hfi2);
  reports(hfdb);


  return 0;
}

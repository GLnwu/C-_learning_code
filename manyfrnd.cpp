/*************************************************************************
    > File Name: manyfrnd.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 10 Sep 2017 06:20:56 PM CST
 ************************************************************************/
// unbound template frined to a template calss
#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class ManyFriend {
 private:
  T item;
 public:
  explicit ManyFrined(const T & i) : item(i) {}
  template <typename C, typename D> friend void show2(C &, D &);
};

template <typename C, typename D> void show2(C & c, D & d) {
  cout << c.item << ", " << d.item << endl; 
}

int main() {
  ManyFriend<int> hfi1(10);
  ManyFriend<int> hfi2(20);
  ManyFriend<double> hfdb(10.5);
  cout << "hfi1, hfi2: ";
  show2(hfi1, hfi2);
  cout << "hfdb, hfi2: ";
  show2(hfdb, hfi2);

  return 0;
}

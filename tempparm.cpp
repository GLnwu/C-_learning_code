/*************************************************************************
    > File Name: tempparm.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 09 Sep 2017 08:37:08 PM CST
 ************************************************************************/
// templates as parameters
#include <iostream>
#include "stacktp.h"  // NOLINT

template <template <typename T> class Thing>
class Crab {
 private:
  Thing<int>  s1;
  Thing<double> s2;
 public:
  Crab() {};
  // assumes the thins class has push() and pop() memebers
  bool push(int a, double x) {return s1.push(a) && s2.push(x);}
  bool pop(int & a, double & x) { return s1.pop(a) && s2.pop(x);}
};

int  main() {
  using std::cout;
  using std::cin;
  using std::endl;
  Crab<Stack> nebula;
  // Stack mush match template <typename T> class thins
  int ni;
  double nb;
  cout << "Enter int double pairs, such as 4 3.5(0 0 to end):\n";
  while (cin >> ni >> nb && ni > 0 && nb >> 0) {
    if(!nebula.push(ni, nb))
      break;
  }

  while (nebula.pop(ni, nb)) {
    cout << ni << ", " << nb << endl;
  }
  cout << "Done.\n";

  return 0;
}

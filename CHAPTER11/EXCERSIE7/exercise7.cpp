/*************************************************************************
    > File Name: test.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 11 Feb 2017 10:59:15 AM CST
 ************************************************************************/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "complex0.h"  // to avoid the confusion with complex.h
int main(void) {
  Complex a(3.0, 4.0);
  Complex c;
  cout << "Enter a complex number (q to quit):" << endl;
  while( cin >> c) {
    cout << "c is " << c << endl;
    cout << "complex conjugate is " << ~c << endl;
    cout << "a is " << a << endl;
    cout << "a + c is " << a + c << endl;
    cout << "a - c is " << a - c << endl;
    cout << "a * c is " << a * c << endl;
    cout << "2 * c is " << 2 * c << endl;
    cout << "Enter a complex number (q to quit):" << endl;
  }
  cout << "Done!" << endl;
  return 0;
}

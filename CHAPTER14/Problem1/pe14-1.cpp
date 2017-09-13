/*************************************************************************
    > File Name: pe14-1.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Tue 12 Sep 2017 11:32:17 PM CST
 ************************************************************************/
// using Wind class containment
#include <iostream>
#include "wine.h"
int main() {
  using std::cout;
  using std::cin;
  using std::endl;

  cout << "Enter name of wine: ";
  char lab[50];
  cin.getline(lab, 50);
  cout << "Enter number of years: ";
  int yrs;
  cin >> yrs;

  Wine holding(lab, yrs);
  holding.GetBottles();
  holding.Show();

  const int YRS = 3;
  int y[YRS] = {1993, 1995, 1998};
  int b[YRS] = {48, 60, 72};
  // create  new object, initialize data in array y and b
  Wine more("Gushing Grape Red", YRS, y, b);
  more.Show();
  cout << "Total bottles for " << more.Label()
    << ": " << more.sum() << endl;
  cout << "Bye\n";
  return 0;
}

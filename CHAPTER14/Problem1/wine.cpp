/*************************************************************************
    > File Name: wine.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Tue 12 Sep 2017 11:34:34 PM CST
 ************************************************************************/
#include <cassert>
#include "wine.h"
using std::cout;
using std::cin;
using std::endl;
// input years and bottles via number of years(years_)
void Wine::GetBottles() {
  cout << "Enter " << label_ << " data"
    <<"for " << years_ << " year(s):" << endl;
  for (int i = 0; i < years_; i++) {
    cout << "Enter year: ";
    cin >> years_quantity_.first()[i];
    cout << "Enter bottles for that year: ";
    cin >> years_quantity_.second()[i];
  }
  assert(cin.good());
}

void Wine::Show() const {
  cout << "Wine :" << label_ << endl;
  cout << "Year    ";
  cout << "Bottles" << endl;
  for(int i = 0; i < years_; i++) {
    cout << years_quantity_.first()[i] << "    ";
    cout << years_quantity_.second()[i] << endl;
  } 
}

int Wine::sum() {
  return years_quantity_.second().sum();
}

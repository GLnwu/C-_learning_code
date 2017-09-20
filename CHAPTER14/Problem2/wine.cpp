/*************************************************************************
    > File Name: wine.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Wed 20 Sep 2017 09:38:06 PM CST
 ************************************************************************/
#include <iostream>
#include <string>
#include "wine.h"  // NOLINT
using std::cout;
using std::cin;
using std::endl;
using std::string;
// public method of Wine
void Wine::GetBottles() {
  if (!years_) {
    return;
  }
  cout << "Enter " <<  (const string &)(*this) << " data"
    <<"for " << years_ << " year(s):" << endl;
  for (int i = 0; i < years_; i++) {
    cout << "Enter year: ";
    cin >> ((PairArray &)(*this)).first()[i];
    cout << "Enter bottles for that year: ";
    cin >> ((PairArray &)(*this)).second()[i];
  }
}

void Wine::Show() const {
  cout << "Wine :" << (const string &)(*this) << endl;
  cout << "Year    ";
  cout << "Bottles" << endl;
  for (int i = 0; i < years_; i++) {
    cout << ((const PairArray &)(*this)).first()[i] << "    ";
    cout << ((const PairArray &)(*this)).second()[i] << endl;
  }
}

int Wine::sum() {
  return ((const PairArray &)(*this)).second().sum();
}

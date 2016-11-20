/*************************************************************************
    > File Name: stock10.cpp
    > Copyright @2016 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 20 Nov 2016 01:29:06 AM CST
 ************************************************************************/
// Stocl class with constructor, destructor added
#include <iostream>
#include <string>
#include "./stock10.h"

// constructors (verbos versions)
Stock::Stock() {  // default constructor
  std::cout << "Default consturctor called\n";
  company   = "no name";
  shares    = 0;
  share_val = 0.0;
  total_val = 0.0;
}

Stock::Stock(const std::string & co, int64_t n, double pr) {
  std::cout << "Constructor using " << co << " called\n";
  company = co;

  if (n < 0) {
    std::cout << "Number of shares can't be negative; "
              << company << "shares set to 0.\n";
    shares = 0;
  } else {
    shares = n;
  }
  share_val = pr;
  set_tot();
}
// class destructor
Stock::~Stock() {   // verbose class destructor
  std::cout << "Bye, " << company << "!\n";
}
// other methods
void Stock::buy(int64_t num, double price) {
  if (num < 0) {
    std::cout << "Number of shares purchased can't be negative. "
              << "Transaction is aborted.\n";
  } else {
    shares += num;
    share_val = price;
    set_tot();
  }
}

void Stock::sell(int64_t num, double price) {
  using std::cout;
  if (num < 0) {
    cout << "Number of shares sold can't be negative. "
         << "Transaction is aborted.\n";
  } else if (num > shares) {
    shares   -= num;
    share_val = price;
    set_tot();
  }
}

void Stock::update(double price) {
  share_val = price;
  set_tot();
}

void Stock::show() {
  using std::cout;
  using std::ios_base;
  // set format to #.###
  ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
  std::streamsize prec = cout.precision(3);

  cout << "Company: " << company << " Shares: " << shares << '\n';
  cout << "  Share Price: $" << share_val;
  // set format to #.##
  cout.precision(2);
  cout << " Total Worth: $" << total_val << '\n';

  // restore original format
  cout.setf(orig, ios_base::floatfield);
  cout.precision(prec);
}

/*************************************************************************
    > File Name: usestock1.cpp
    > Copyright @2016 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 20 Nov 2016 02:53:18 PM CST
 ************************************************************************/
// using the Stock class
// compile with stock10.cpp
#include <iostream>
#include "./stock10.h"

int main() {
  {
    using std::cout;
    cout << "Using contructors to create new objects\n";
    Stock stock1("NanoSmart", 12, 20.0);  // syntax 1
    stock1.show();
    Stock stock2 = Stock("Boffo Objects", 2, 2.0);  // syntax 2
    stock2.show();

    cout << "Assigning stock1 to stock2:\n";
    stock2 = stock1;
    cout << "Listing stock1 and stock2:\n";
    stock1.show();
    stock2.show();

    cout << "Using a constructor to reset an object\n";
    // 为什么初始化Stock2的时候，相同的语法，却没有初始化一个临时对象?
    stock1 = Stock("Niffy Foods", 10, 50.0);  // tenp object
    cout << "Revised stock1:\n";
    stock1.show();
    cout << "Done\n";
  }
}

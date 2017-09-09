/*************************************************************************
    > File Name: stacktem.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Thu 07 Sep 2017 10:41:33 PM CST
 ************************************************************************/
// testing the template stack class
#include <iostream>
#include <string>
#include <cctype>
#include "stacktp.h"  // NOLINT
using std::cin;
using std::cout;

int main() {
  Stack<std::string> st;  // create an empty stack
  char ch;
  std::string po;
  cout << "Please enter A to add a purchase order,\n"
      << "P to process a PO, or Q to quit.\n";
  while(cin >> ch && 'Q' != std::toupper(ch) ) {
    while ('\n' != cin.get())
      continue;
    if (!std::isalpha(ch)) {
      cout << "\a";
      continue;
    }
    switch(std::toupper(ch)) {
      case 'A' : cout << "Enter a PO number to add: ";
                 cin >> po;
                 if (st.isfull())
                   cout << "stack already full\n";
                 else
                   st.push(po);
                 break;
      case 'P' : if (st.isempty())
                   cout << "stack already empty\n";
                 else {
                   st.pop(po);
                   cout << "PO #" << po << "  popped\n";
                   break;
                 }
    }
    cout << "Please enter A to add a purchase order, \n"
        << "P to process a PO, or Q to quit.\n";
  }
  cout << "Bye\n";
  return 0;
}

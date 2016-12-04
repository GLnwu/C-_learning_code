/*************************************************************************
    > File Name: stacker.cpp
    > Copyright @2016 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 04 Dec 2016 09:07:15 PM CST
 ************************************************************************/
//testing the Stack class
#include <iostream>
#include <cctype> //or ctype.h
#include "stack.h"
int main() {
  using std::cout;
  using std::cin;
  Stack st;  // create an empty stack
  char  ch;
  Item po;
  cout << "Please enter A to add a purchase order,\n"
       << "P to process a PO,or Q to quit.\n";
  while (cin >> ch && 'Q' != toupper(ch)) {
    while ('\n' != cin.get())
      continue;
    if (!isalpha(ch)) {
      cout << '\a';
      continue;
    }
    switch(ch) {
      case 'A':
      case 'a': cout << "Enter a PO number to ad: ";
                cin >> po;
                if(st.isfull())
                  cout << "stack already full\n";
                else
                  st.push(po);
                break;
      case 'P':
      case 'p': if (st.isempty())
                  cout << "stack already empty\n";
                else {
                  st.pop(&po);
                  cout << "PO #" << po << " popped\n";
                }
                break;
    }
    cout << "Please enter A to add a purchase order,\n"
         << "P to process a PO, or Q to quit.\n";
  }
  cout << "Bye\n";
  return 0;
}

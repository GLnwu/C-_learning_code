/*************************************************************************
    > File Name: workmi.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Thu 07 Sep 2017 08:05:59 PM CST
 ************************************************************************/
// multiple inheritance
// compile with workermi.cpp
#include <iostream>
#include <cstring>
#include "workermi.h"   // NOLINT
const int SIZE = 5;

int main() {
  using std::cin;
  using std::cout;
  using std::endl;
  using std::strchr;

  Worker * lolas[SIZE];

  int ct;
  for (ct = 0; ct < SIZE; ct++) {
    char choice;
    cout << "Enter the employes category:\n"
        << "w: waiter   s: singer  "
        << "t: singing waiter   q: quit\n";
    cin >> choice;
    while (NULL == strchr("wstq", choice)) {
      cout << "Please enter a w, s, t, or q: ";
      cin >> choice;
    }
    if ('q' == choice)
      break;
    switch (choice) {
      case 'w':   lolas[ct] = new Waiter;
                  break;
      case 's':   lolas[ct] = new Singer;
                  break;
      case 't':   lolas[ct] = new SingingWaiter;
                  break;
    }
    cin.get();
    lolas[ct]->Set();
  }
  cout << "\nHere is your staff:\n";
  int i;
  for (i = 0; i < ct; i++) {
    cout << endl;
    lolas[i]->Show();
  }
  for (i = 0; i < ct; i++)
    delete lolas[i];
  cout << "Bye.\n";
  return 0;
}

/*************************************************************************
    > File Name: pe14_3.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Wed 20 Sep 2017 11:12:43 PM CST
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "workermi.h"   // NOLINT
#include "queuetp.h"    // NOLINT
#define SIZE 5
// 删除缓冲区中多余的字符及换行符
#define drop_randuant_char() do {while('\n'!=cin.get())continue;} while(0)
using std::cin;
using std::cout;
using std::endl;
using std::strchr;

int main() {
  QueueTp<Worker *> lolas(SIZE);

  Worker* add = nullptr;
  while (!lolas.isfull()) {
    char choice;
    cout << "Enter the employes category:\n"
        << "w: waiter   s: singer  "
        << "t: singing waiter   q: quit\n";
    cin >> choice;
    while (NULL == strchr("wstq", choice)) {
      drop_randuant_char();
      cout << "Please enter a w, s, t, or q: ";
      cin >> choice;
    }
    drop_randuant_char();

    if ('q' == choice)
      break;
    switch (choice) {
      case 'w': add = new Waiter;
                break;
      case 's': add = new Singer;
                break;
      case 't': add = new SingingWaiter;
                break;
    }
    lolas.enqueue(add);
    add->Set();
  }
  cout << "\nHere is your staff:\n";
  while (!lolas.isempty()) {
    cout << endl;
    lolas.dequeue(add);
    add->Show();
  }
  cout << "Bye.\n";
  return 0;
}

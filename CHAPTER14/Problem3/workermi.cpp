/*************************************************************************
    > File Name: workermi.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Wed 06 Sep 2017 10:26:45 PM CST
 ************************************************************************/
// working class methods with MI
#include "workermi.h"   // NOLINT
#include <iostream>
#include <cassert>
#include <limits>
using std::cout;
using std::cin;
using std::endl;
using std::string;
// Worker methods
Worker::~Worker() {}

// protected methods
void Worker::Data() const {
  cout << "Name: " << fullname << endl;
  cout << "Employee ID: " << id << endl;
}

void Worker::Get() {
  cout << "Enter name: ";
  assert(getline(cin, fullname) || !fullname.empty());
  cout << "Enter Employee ID: ";
  assert(cin >> id);
  while ('\n' != cin.get())
    continue;
}

// Waiter methods
void Waiter::Set() {
  Worker::Get();
  Get();
}

void Waiter::Show() const {
  cout << "Category: waiter\n";
  Worker::Data();
  Data();
}

// protected methods
void Waiter::Data() const {
  cout << "Panache rating: " << panache << endl;
}

void Waiter::Get() {
  cout << "Enter waiter's panache rating: ";
  assert(cin >> panache);
  while ('\n' != cin.get()) {
    continue;
  }
}

// Singer methods
const char * Singer::pv[Singer::Vtypes] = {"other", "alto", "contralto",
          "soprano", "bass", "baritone", "tenor"};

void Singer::Set() {
  Worker::Get();
  Get();
}

void Singer::Show() const {
  cout << "Category: singer\n";
  Worker::Data();
  Data();
}

// protected methods
void Singer::Data() const {
  cout << "Vocal range: " << pv[voice] << endl;
}

void Singer::Get() {
  cin.clear();
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  cout << "Enter number for singer's vocal range:\n";
  int i;
  for (i = 0; i < Vtypes; i++) {
    cout << i << ": " << pv[i] << "     ";
    if (3 == i % 4) {
      cout << endl;
    }
  }
  if (0 != i % 4) {
    cout << '\n';
  }
  assert(cin >> voice);
  while ('\n' != cin.get()) {
    continue;
  }
}

// Singingwaiter methods
void SingingWaiter::Data() const {
  Singer::Data();
  Singer::Data();
}

void SingingWaiter::Get() {
  Waiter::Get();
  Singer::Get();
}

void SingingWaiter::Set() {
  cout << "Enter singing waiter's name: ";
  Worker::Get();
  Get();
}

void SingingWaiter::Show() const {
  cout << "Category: singing waiter\n";
  Worker::Data();
  Data();
}

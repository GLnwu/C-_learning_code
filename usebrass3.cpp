/*************************************************************************
    > File Name: usebrass3.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 15 Jul 2017 10:14:54 PM CST
 ************************************************************************/
// polymorphic example using an abstract base class
// compile with acctacb.cpp
#include <iostream>
#include <string>
#include "acctabc.h"
const int CLIENTS = 4;

int main(void) {
  using std::cin;
  using std::cout;
  using std::endl;
  AcctABC * p_clients[CLIENTS];
  std::string temp;
  long tempnum;
  double tempbal;
  char kind;

  for (int i = 0; i < CLIENTS; i++) {
    cout << "Enter client's name: ";
    getline(cin,temp);
    cout << "Enter client's account number: ";
    cin >> tempnum;
    cout << "Enter opening balance: $";
    cin >> tempbal;
    cout << "Enter 1 for Brass Account or "
         << "2 for BrassPlus Account: ";
    while (cin >> kind && (kind != '1' && kind != '2'))
      cout << "Enter either 1 or 2: ";
    if ('1' == kind) {
      p_clients[i] = new Brass(temp, tempnum, tempbal);
    } else {
      double tmax, trate;
      cout << "Enter the overcraft limit: $";
      cin >> tmax;
      cout << "Enter the interest rate "
           << "as a decimal fraction: ";
      cin >> trate;
      p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
    }
    while(cin.get() != '\n')
      continue;
  }
  
  for(int i = 0; i < CLIENTS; i++) {
    delete p_clients[i];   // free memory
  }
  cout << "Done.\n";

  return 0;
}

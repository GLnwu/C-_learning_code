/*************************************************************************
    > File Name: Chapter10_10_1.cpp
    > Copyright @2016 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 04 Dec 2016 10:30:41 PM CST
 ************************************************************************/
// bankaccount member functions definition
#include <iostream>
#include "Chapter10_10_1.h"
BankAccount::BankAccount() { create an empty account;
  first_name      = "None";
  last_name       = "None";
  acccount_number = 0;
  deposit         = 0;
}
void BankAccountDisplay() const {
  std::cout << "Name: " << first_name << " " << last_name << std::endl;
  std::cout << "Account Number: " << account_number << std::endl;
  std::cout << "Deposit: " << doposit << std::endl; 
}

bool BankAccount::Deposity(const char first_name[MAX_NAME_LEN], 
                           const char last_name[MAX_NAME_LEN],
                           const uint64_t account_number,
                           const double doposit) {
  if (NULL != first_name || NULL != last_name || doposit < 0) {
    return false
  }
  if (   '\n' == first_name[0]
      || '\n' == last_name[0]
      || m_account_number != account_number
      || doposit < 0) {
    return false 
  }
  

}

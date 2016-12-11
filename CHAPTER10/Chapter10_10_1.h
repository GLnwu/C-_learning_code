/*************************************************************************
    > File Name: Chapter10_10_1.h
    > Copyright @2016 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 04 Dec 2016 09:45:48 PM CST
 ************************************************************************/
// class apply on bank account
#ifndef CHAPTER10_CHAPTER10_10_1_H_
#define CHAPTER10_CHAPTER10_10_1_H_
#include <cstdint>
class BankAccount {
 private:
    enum      {MAX_NAME_LEN = 1024};
    char      m_first_name[MAX_NAME_LEN];
    char      m_last_name[MAX_NAME_LEN];
    uint64_t  m_account_number;
    double    m_doposit;
 public:
    BankAccount();
    void BankAccountDisplay() const;
    bool Deposit();  // deposit money into bankaccount
    bool TakeOut();  // take money out of bankaccount
}
#endif  // CHAPTER10_CHAPTER10_10_1_H_

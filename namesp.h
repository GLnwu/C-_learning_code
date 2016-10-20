/*************************************************************************
    > File Name: namespB.h
    > Copyright @2016 Copyright <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Tue 18 Oct 2016 12:34:49 AM CST
 ************************************************************************/
// namesp.h
#include <string>
// create the pers and debts namespaces
#ifndef NAMESP_H_
#define NAMESP_H_
namespace pers {
struct Person {
  std::string fname;
  std::string lname;
};
void getPerson(Person * rp);
void showPerson(const Person &);
}  // namespace pers

namespace debts {
using pers::Person;
using pers::getPerson;
using pers::showPerson;
struct Debt {
  Person name;
  double amount;
};
void getDebt(Debt * rd);
void showDebt(const Debt &);
double sumDebts(const Debt ar[], int n);
}  // namespace debts
#endif  // NAMESP_H_

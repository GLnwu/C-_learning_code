/*************************************************************************
    > File Name: usenmsp.cpp
    > Copyright @2016 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Wed 19 Oct 2016 11:33:49 PM CST
 ************************************************************************/
// usenmsp.cpp -- using namespaces
#include <iostream>
#include "./namesp.h"

void other(void);
void another(void);
int main(void) {
  using debts::Debt;
  using debts::showDebt;
  Debt golf = { {"Benny", "Goatsniff"}, 120.0};
  showDebt(golf);
  other();
  another();
  return 0;
}

void other(void) {
  using std::cout;
  using std::cin;
  using namespace debts;  // NOLINT
  Person dg = {"Doodles", "Glister"};
  showPerson(dg);
  cout << std::endl;
  Debt zippy[3];
  int i;

  for (i = 0; i < 3; i++)
    getDebt(&zippy[i]);
  for (i = 0; i < 3; i++)
    showDebt(zippy[i]);
  cout << "Total debt: $" << sumDebts(zippy, 3) << std::endl;
  return;
}

void another(void) {
  using pers::Person;
  Person collector = { "Milo", "Rightshift"};
  pers::showPerson(collector);
  std::cout << std::endl;
}

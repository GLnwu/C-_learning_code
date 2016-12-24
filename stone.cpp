/*************************************************************************
    > File Name: stone.cpp
    > Copyright @2016 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 24 Dec 2016 03:40:20 PM CST
 ************************************************************************/
// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
#include "stonewt.h"  \\ NOLINT
void display(const Stonewt & st, int n);
int main(void) {
  Stonewt incognito(275);   // uses constructor to niititlalize
  Stonewt wolfe(285.7);       // same as Stonewt wolfr = 285.7;
  Stonewt taft(21, 8);

  cout << "The celebrity weighed ";
  incognito.show_stn();
  cout << "The dectective weighed ";
  wolfe.show_stn();
  cout << "The President weighed ";
  taft.show_lbs();
  incognito = Stonewt(276.8);  // uses constructor for conversion
  taft = Stonewt(325);         // same as taft = Stonewt(325);
  cout << "After dinner, the celebrity weighed ";
  incognito.show_stn();
  cout << "After dinner, the President weighed ";
  taft.show_lbs();
  display(taft, 2);
  cout << "No stone left unearned\n";
  return 0;
}

void display(const Stonewt & st, int n) {
  for (int i = 0; i < n; i++) {
    cout << "Wow! ";
    st.show_stn();
  }
}

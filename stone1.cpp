/*************************************************************************
    > File Name: stone1.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 01 Jan 2017 01:17:39 AM CST
 ************************************************************************/
// user-defined consversion functions
// compile with stonewt1.cpp
#include <iostream>
#include "stonewt1.h"   // NOLINT

int main(void) {
  using std::cout;
  Stonewt poppins(9, 2.8);   // 9 sotne, 2.8 pounds
  double p_wt = poppins;    // implicit conversion

  cout << "Convert to double => ";
  cout << "Poppins: " << p_wt << " pounds.\n";
  cout << "Convert to int => ";
  cout << "Poppins: " << int (poppins) << " pounds.\n";

  return 0;
}

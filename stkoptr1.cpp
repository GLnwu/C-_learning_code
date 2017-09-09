/*************************************************************************
    > File Name: stkoptr1.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 09 Sep 2017 01:36:58 PM CST
 ************************************************************************/
// testing stack of pointers
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "stcktp1.h"  // NOLINT
const int Num = 10;
int main() {
  std::srand(std::time(0));
  std::cout << "Please stack size: ";
  int stacksize;
  std::cin >> stacksize;
  Stack<const char *> st(stacksize);
// in baskey
  const char * in[Num] = {
    "1: Hank Gilgamesh", "2: Kiki Ishtar",
    "3: Betty Rocker", "4: Ian Flagranti",
    "5: Wolfgan Kibble", " 6: Portia Koop",
    "7: Joy Almondo", "8: Xaverie Paprika",
    "9: Juan Moore", "10: Misha Mache"
  };
// out basket
  const char * out[Num];

  int processed = 0;
  int nextin = 0;
  // manipulate stack size to server a random push\pop
  // push and pop operation is random so
  // the out array content will not be the same
  // no matter which stacksize you choose
  while (processed < Num) {
    if (st.isempty())
      st.push(in[nextin++]);
    else if (st.isfull())
      st.pop(out[processed++]);
    else if (std::rand() % 2 && nextin < Num)
      st.push(in[nextin++]);
    else
      st.pop(out[processed++]);
  }
  for (int i = 0; i < Num; i++) {
    std::cout << out[i] << std::endl;
  }
  return EXIT_SUCCESS;
}

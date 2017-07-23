/*************************************************************************
    > File Name: classic.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 22 Jul 2017 10:17:53 PM CST
 ************************************************************************/
#include "classic.h"  // NOLINT
#include <iostream>
#include <cstring>

Classic::Classic(char * s1, char * s2, char * s3, int n, double x):
  Cd(s2, s3, n, x) {
  std::strcpy(primary_work, s1);
}

void Classic::Report() const {
  std::cout << "primary work: " << primary_work << std::endl;
  Cd temp = *this;
  temp.Report();
}

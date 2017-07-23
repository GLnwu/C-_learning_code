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
  primary_work = new char[std::strlen(s1) + 1];
  std::strcpy(primary_work, s1);
}

Classic::Classic(const Classic & d) : Cd(d) {
  primary_work = new char[std::strlen(d.primary_work) + 1];
  std::strcpy(primary_work, d.primary_work);
}

Classic::Classic() : Cd() {
  primary_work = new char[std::strlen("null") + 1];
  std::strcpy(primary_work, "null");
}

Classic & Classic::operator=(const Classic & d) {
  if (this == &d) {
    return *this;
  }
  Cd::operator=(d);
  delete [] primary_work;
  primary_work = new char[std::strlen(d.primary_work) + 1];
  std::strcpy(primary_work, d.primary_work);

  return *this;
}

void Classic::Report() const {
  Cd::Report();
  std::cout << "primary work: " << primary_work << std::endl;
//  Cd temp = *this;
//  temp.Report();
}

Classic::~Classic() {
  delete [] primary_work;
}

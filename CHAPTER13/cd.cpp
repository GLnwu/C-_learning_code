/*************************************************************************
    > File Name: cd.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 22 Jul 2017 09:26:12 PM CST
 ************************************************************************/
#include "cd.h"  // NOLINT
#include <cstring>
#include <iostream>
Cd::Cd(char * s1, char * s2, int n, double x) {
  std::strcpy(performers, s1);
  std::strcpy(label, s2);
  selections = n;
  playtime = x;
}

/*
  Cd::Cd(const Cd & d) {
  std::strcpy(performers, d.performers);
  std::strcpy(label, d.label);
  selections = d.selections;
  playtime = d.playtime; 
}
*/

void Cd::Report() const {
  std::cout << "performers: " << performers <<std::endl;
  std::cout << "label: " << label << std::endl;
  std::cout << "selections: " << selections << std::endl;
  std::cout << "playtime: " << playtime << std::endl;
}


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
  performers = new char[std::strlen(s1) + 1];
  label = new char[std::strlen(s2) + 1];
  std::strcpy(performers, s1);
  std::strcpy(label, s2);
  selections = n;
  playtime = x;
}

Cd::Cd(const Cd & d) {
  performers = new char[std::strlen(d.performers) + 1];
  label = new char[std::strlen(d.label) + 1];
  std::strcpy(performers, d.performers);
  std::strcpy(label, d.label);
  selections = d.selections;
  playtime = d.playtime;
}

Cd::Cd() {
//  Cd d("null", "null", 0, 0.0);
  performers = new char[std::strlen("null") + 1];
  label = new char[std::strlen("null") + 1];
  std::strcpy(performers, "null");
  std::strcpy(label, "null");
  selections = 0;
  playtime = 0.0;
}

void Cd::Report() const {
  std::cout << "performers: " << performers <<std::endl;
  std::cout << "label: " << label << std::endl;
  std::cout << "selections: " << selections << std::endl;
  std::cout << "playtime: " << playtime << std::endl;
}

Cd::~Cd() {
  delete [] performers;
  delete [] label;
}

Cd & Cd::operator=(const Cd & d) {
  if (this == &d) {
    return *this;
  }
  delete [] performers;
  delete [] label;
  performers = new char[std::strlen(d.performers) + 1];
  label = new char[std::strlen(d.performers) + 1];
  std::strcpy(performers, d.performers);
  std::strcpy(label, d.label);
  selections = d.selections;
  playtime = d.playtime;
  return *this;
}

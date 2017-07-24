/*************************************************************************
    > File Name: vintageport.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Mon 24 Jul 2017 09:43:19 PM CST
 ************************************************************************/
#include "vintageport.h"
#include "port.h"
#include <iostream>
#include <cstring>
VintagePort::VintagePort():Port() {
  nickname = "none";
  year = 0;
}
VintagePort::VintagePort(const char * br, const char * st, int b, const char * nn, int y) :
  Port(br, st, b) {
  nickname = new char[std::strlen(nn) + 1];
  std::strcpy(nickname, nn);
}

VintagePort::VintagePort(const VintagePort & vp) : Port(vp) {
  nickname = new char[std::strlen(vp.nickname) + 1];
  std::strcpy(nickname, vp.nickname);
}

VintagePort & VintagePort::operator=(const VintagePort & vp) {
  if(this == &vp) {
    return *this;
  }
  Port::operator=(vp);
  delete [] nickname;
  nickname = new char[std::strlen(vp.nickname) + 1];
  std::strcpy(nickname, vp.nickname);
  return *this;
}

void VintagePort::Show() const {
  Port::Show();
  cout << "Nickname: " << nickname << endl;
  cout << "Year: " << year << endl;
}

ostream & operator<<(ostream & os, const VintagePort & vp) {
  os << (const Port &)vp;
  os << "," << vp.nickname << ", " << vp.year <<endl;
  return os;
}

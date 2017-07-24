/*************************************************************************
    > File Name: port.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Mon 24 Jul 2017 09:17:46 PM CST
 ************************************************************************/
#include "port.h"   // NOLINT
#include <cstring>
Port::Port(const char * br, const char * st, int b) {
  brand = new char[std::strlen(br) + 1];
  std::strcpy(brand, br);
  std::strcpy(style, st);
  bottles = b;
}

Port::Port(const Port & p) {
  brand = new char[std::strlen(p.brand) + 1];
  std::strcpy(brand, p.brand);
  std::strcpy(style, p.style);
  bottles = p.bottles;
}

Port & Port::operator=(const Port & p) {
  if(this == &p) {
    return *this;
  }
  brand = new char[std::strlen(p.brand) + 1];
  std::strcpy(brand, p.brand);
  std::strcpy(style, p.style);
  bottles = p.bottles;
  return *this;
}

Port & Port::operator+=(int b) {
  bottles += b;
  return *this;
}

Port & Port::operator-=(int b) {
  bottles -= b;
  return *this;
}

void Port::Show() const {
  cout << "Brand: " << brand << endl;
  cout << "Kind: " << style << endl;
  cout << "Bottles; " << bottles << endl;
}

ostream & operator<<(ostream & os, const Port & p) {
  os << p.brand << ", " << p.style << ", " << p.bottles <<endl;
  return os;
}

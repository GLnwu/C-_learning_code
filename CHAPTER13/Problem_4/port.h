/*************************************************************************
    > File Name: port.h
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Mon 24 Jul 2017 09:10:17 PM CST
 ************************************************************************/
#ifndef CHAPTER13_PROBLEM_4_PORT_H_
#define CHAPTER13_PROBLEM_4_PORT_H_
#include <iostream>
using namespace std;
class Port {
 private:
  char * brand;
  char style[20];  // i.e., tawny, ruby, vintage
  int bottles;
 public:
  Port(const char * br = "none", const char * st = "none", int b = 0);
  Port(const Port & p);   // copy constructor
  virtual ~Port() {delete [] brand;}
  Port & operator=(const Port & p);
  Port & operator+=(int b);     // adds b to bottles
  Port & operator-=(int b);     // subtracts b from bottles, if available
  int BottleCount() const {return bottles;}
  virtual void Show() const;
  friend ostream & operator<<(ostream & os, const Port & p);
};


#endif  // CHAPTER13_PROBLEM_4_PORT_H_

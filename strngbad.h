/*************************************************************************
    > File Name: strngbad.h
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 25 Feb 2017 09:44:06 PM CST
 ************************************************************************/
// strngbad.h = flawed string class defintion
#include <iostream>
#ifndef STRNGBAD_H_
#define STRNGBAD_H_
class StringBad {
 private:
  char * str;             // pointer to string
  int len;                // length of string 
  static int num_strings; // number of objects
 public:
  StringBad(const char * s);  //  constructor
  StringBad();                // default constructor
  ~StringBad();               // defstructor
  // friend function
  friend std::ostream & operator<<(std::ostream & os, 
      const StringBad & st);
};
#endif // STRNGBAD_H_

/*************************************************************************
    > File Name: complex0.h
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 11 Feb 2017 08:30:07 AM CST
 ************************************************************************/
#include <iostream>
#ifndef CHAPTER11_EXCERSIE7_COMPLEX0_H_
#define CHAPTER11_EXCERSIE7_COMPLEX0_H_
class Complex {
 public:
  Complex(double real, double imag);
  Complex();  // default constructor
  ~Complex();
  Complex operator+(const Complex & c) const;
  Complex operator-(const Complex & c) const;
  Complex operator~() const;
  Complex operator*(const Complex & c) const;
  Complex operator*(const double f) const;
  // friend
  friend Complex operator*(const double f, const Complex & c) {return c * f;}
  friend std::ostream & operator<<(std::ostream & os, const Complex & T);
  friend std::istream & operator>>(std::istream & is, Complex & T);
 private:
  double m_real;
  double m_imaginary;
};
#endif  // CHAPTER11_EXCERSIE7_COMPLEX0_H_

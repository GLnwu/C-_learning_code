/*************************************************************************
    > File Name: complex0.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 11 Feb 2017 08:59:20 AM CST
 ************************************************************************/
// methods for Complex class
#include <cstdlib>
#include "complex0.h"  // NOLINT include <iostream>
using std::cout;
using std::cin;
// public methods
Complex::Complex() {
  m_real = 0;
  m_imaginary = 0;
}

Complex::Complex(double real, double imag) {
  m_real = real;
  m_imaginary = imag;
}

Complex::~Complex() {     // destructor
}
// operator overloading
// add two complex
Complex Complex::operator+(const Complex & c) const {
  Complex temp;
  temp.m_real = m_real + c.m_real;
  temp.m_imaginary = m_imaginary + c.m_imaginary;
  return temp;
}
// subtract Complex c from (*this)
Complex Complex::operator-(const Complex & c) const {
  Complex temp;
  temp.m_real = m_real - c.m_real;
  temp.m_imaginary = m_imaginary - c.m_imaginary;
  return temp;
}
// Complex conjugate
Complex Complex::operator~() const {
  Complex temp;
  temp.m_real = m_real;
  temp.m_imaginary = -m_imaginary;
  return temp;
}
// mutiply Complex c by Complex (*this)
Complex Complex::operator*(const Complex & c) const {
  Complex temp;
  temp.m_real = m_real * c.m_real - m_imaginary * c.m_imaginary;
  temp.m_imaginary = m_real * c.m_imaginary + m_imaginary * c.m_real;
  return temp;
}
// mutiply Complex (*this) by f
Complex Complex::operator*(const double f) const {
  Complex temp;
  temp.m_real = m_real * f;
  temp.m_imaginary = m_imaginary * f;
  return temp;
}
// display Complex
std::ostream & operator<<(std::ostream & os, const Complex & T) {
  os << "(" << T.m_real << "," << T.m_imaginary << "i)";
  return os;
}

std::istream & operator>>(std::istream & is, Complex & T) {
  cout << "real: ";
  is >> T.m_real;
  if (!is) {
    exit(EXIT_FAILURE);
  }
  cout << "imaginary: ";
  is >> T.m_imaginary;
  return is;
}

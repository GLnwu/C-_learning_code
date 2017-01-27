/*************************************************************************
    > File Name: vect.cpp
    > Copyright @2016 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Fri 23 Dec 2016 07:46:36 PM CST
 ************************************************************************/
// methods for Vector class
#include <cmath>
#include "vect.h"  // NOLINT include <iostream>
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR {
  // compute degrees in one radian
  const double Rad_to_deg = 45.0 / atan(1);
  // should be about 57.2957795130823

  // private methods
  // set x from polar coordinate
  void Vector::set_x(double mag, double ang) {
    x = mag * cos(ang);
  }

  // set y from polar coordinate
  void Vector::set_y(double mag, double ang) {
    y = mag * sin(ang);
  }

  // public methods
  Vector::Vector() {  // default constructor
    x = y = 0.0;
    mode = RECT;
  }

  // construc vector from rectangular coordiantes if form is r
  // (the default) or else from polar coordiante if form is p
  Vector::Vector(double n1, double n2, Mode form) {
    mode = form;
    if (RECT == form) {
      x = n1;
      y = n1;
    } else if (POL == form) {
      set_x(n1, n2); 
      set_y(n1, n2);
    } else {
      cout << "Incorrect 3rd argument to Vector() -- ";
      cout << "Vector set to 0\n";
      x = y = 0.0;
      mode = RECT;
    }
  }
  void Vector::reset(double n1, double n2, Mode form) {
    mode = form;
    if (form == RECT) {
      x = n1;
      y = n2;
    } else if (POL == form) {
      set_x(n1, n2); 
      set_y(n1, n2);
    } else {
      cout << "Incorrect 3rd argument to Vector() -- ";
      cout << "vector set to 0\n";
      x = y  = 0.0;
      mode = RECT;
    }
  }

  Vector::~Vector() {   // destructor
  }

  double Vector::magval() const {
    return sqrt(x * x + y * y);
  }

  double Vector::angval() const {
    if (0.0 == x && 0.0 == y)
      return 0.0;
    else
      return atan2(y, x);
  }
  void Vector::polar_mode() {   // set to polar mode
    mode = POL;
  }
  void Vector::rect_mode() {
    mode = RECT;
  }

  // operator overloading
  // add two Vectors
  Vector Vector::operator+(const Vector & b) const {
    return Vector(x + b.x, y + b.y);
  }

  // substract Vector b from a
  Vector Vector::operator-(const Vector & b) const {
    return Vector(x - b.x, y - b.y);
  }

  // reverse sign of Vector
  Vector Vector::operator-() const {
    return Vector(-x, -y);
  }

  // mutiply vector by n
  Vector Vector::operator*(double n) const {
    return Vector(n * x, n * y);
  }

  // friend methods
  // multiply n by Vector a
  Vector operator*(double n, const Vector & a) {
    return a * n;
  }

  // display rectangular coordinates if mode is RECT
  // else display polar coordiantes if mode is POL
  std::ostream & operator<<(std::ostream & os, const Vector & v) {
    if (Vector::RECT == v.mode) {
      os << "(x,y) = (" << v.x << ", "
         << v.y << ")";
    } else if (Vector::POL == v.mode) {
      os << "(m,a) = (" << v.magval() << ", "
         << v.angval() * Rad_to_deg   << ")";
    } else {
      os << "Vector object mode  is invalid";
    }
    return os;
  }

}   // end namespace VECTOR

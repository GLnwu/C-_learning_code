/*************************************************************************
    > File Name: vect.h
    > Copyright @2016 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Wed 14 Dec 2016 10:57:09 PM CST
 ************************************************************************/
#ifndef VECT_H_
#define VECT_H_
#include <iostream>
namespace VECTOR {
class Vector {
 public:
    enum Mode {RECT, POL};
    // RECT for rectangular, POL for Polar modes
 private:
    double x;     // horizontal value
    double y;     // vertical value
    Mode   mode;  // RECT or POL
    // private methods for setting values
    void set_x(double mag, double ang);
    void set_y(double mag, double ang);

 public:
    Vector();
    Vector(double n1, double n2, Mode form = RECT);
    void reset(double n1, double n2, Mode form = RECT);
    ~Vector();
    double xval()   const {return x;}     // report x value
    double yval()   const {return y;}     // report y value
    double magval() const;                // report magnitude
    double angval() const;                // report angle
    void polar_mode();                    // set mode to POL
    void rect_mode();                     // set mode to RECT
    // operator overloading
    Vector operator+(const Vector & b) const;
    Vector operator-(const Vector & b) const;
    Vector operator-() const;
    Vector operator*(double n) const;
    // friends
    friend Vector operator*(double m, const Vector & a);
    friend std::ostream & operator<<(std::ostream & os, const Vector & v);
};
}   // namespace VECTOR
#endif  // VECT_H_
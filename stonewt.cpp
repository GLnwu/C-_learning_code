/*************************************************************************
    > File Name: stonewt.cpp
    > Copyright @2016 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 24 Dec 2016 02:59:18 PM CST
 ************************************************************************/
// Stonewt methods
#include <iostream>
using std::cout;
#include "./stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs) {
  stone = static_cast<int>(lbs) / Lbs_per_stn;  // integer division
  pds_left = static_cast<int>(lbs) % Lbs_per_stn + lbs - static_cast<int>(lbs);
  pounds = lbs;
}

// cosntructor Stonewt object from ston, double values
Stonewt::Stonewt(int stn, double lbs) {
  stone     = stn;
  pds_left  = lbs;
  pounds    = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt() {  // default constructor, wt = 0
  stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt() {   // destructor
}

// show witght int stones
void Stonewt::show_stn() const {
  cout << stone << " stone, " << pds_left << "pounds\n";
}

// show weight in pounds
void Stonewt::show_lbs() const {
  cout << pounds << " pounds\n";
}

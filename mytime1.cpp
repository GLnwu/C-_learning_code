/*************************************************************************
    > File Name: mytime1.cpp
    > Copyright @2016 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 11 Dec 2016 10:43:45 PM CST
 ************************************************************************/
// implementing Time methods
#include <iostream>
#include "./mytime1.h"

Time::Time() {
  hours = minutes = 0;
}

Time::Time(uint64_t h, uint64_t m) {
  hours   = h + m / 60;
  minutes = m % 60;
}

void Time::AddMin(uint64_t m) {
  minutes += m;
  hours   += minutes / 60;
  minutes %= 60;
}

void Time::AddHr(uint64_t h) {
  hours += h;
}

void Time::Reset(uint64_t h, uint64_t m) {
  hours = h;
  minutes = m;
}

Time Time::operator+(const Time & t) const {
  Time sum;
  sum.minutes  = minutes + t.minutes;
  sum.hours    = hours + t.hours + sum.minutes / 60;
  sum.minutes %= 60;
  return sum;
}

void Time::Show() const {
  std::cout << hours << " hours, " << minutes << " minutes";
}

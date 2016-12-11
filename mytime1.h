/*************************************************************************
    > File Name: mytime1.h
    > Copyright @2016 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 11 Dec 2016 10:33:13 PM CST
 ************************************************************************/
// Time class before operator operator overloading
#ifndef MYTIME1_H_
#define MYTIME1_H_
#include <cstdint>

class Time {
 private:
    uint64_t hours;
    uint64_t minutes;
 public:
    Time();
    explicit Time(uint64_t h, uint64_t m = 0);  // 防止隐式转换，声明为explicit
    void AddMin(uint64_t m);
    void AddHr(uint64_t h);
    void Reset(uint64_t h = 0, uint64_t m = 0);
    Time operator+(const Time & t) const;
    void Show() const;
};
#endif  // MYTIME1_H_


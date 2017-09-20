/*************************************************************************
    > File Name: wine.h
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 17 Sep 2017 09:00:55 PM CST
 ************************************************************************/
// private inheritance to implement class Wine
#ifndef CHAPTER14_PROBLEM2_WINE_H_
#define CHAPTER14_PROBLEM2_WINE_H_
#include <iostream>
#include <valarray>
#include <string>
#include "pair.h"   // NOLINT
typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;
class Wine : private std::string, private PairArray {
 private:
  int years_;   // years of the wine
 public:
  // initialize lable to l, number of years to y
  // vintage years to yr[], bottles to bot[]
  Wine(const char* l, int y, const int yr[], const int bot[])
    : std::string(l), years_(y) {
    ((PairArray &)(*this)).first() = ArrayInt(yr, y);
    ((PairArray &)(*this)).second() = ArrayInt(bot, y);
  }
  Wine(const char *l, int y)
    : std::string(l), years_(y) {
      ((PairArray &)(*this)).first() = ArrayInt(y);
      ((PairArray &)(*this)).second() = ArrayInt(y);
  }
  Wine() {}
  void GetBottles();
  void Show() const;
  const std::string & Label() const {return (const std::string & )(*this);}
  int sum();
};
#endif  // CHAPTER14_PROBLEM2_WINE_H_

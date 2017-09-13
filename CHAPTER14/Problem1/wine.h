/*************************************************************************
    > File Name: wine.h
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Mon 11 Sep 2017 10:42:28 PM CST
 ************************************************************************/
#ifndef WINE_H_
#define WINE_H_
#include <iostream>
#include <valarray>
#include <string>
#include "pair.h"
typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;
class Wine {
 private:
  std::string label_;  // wine name
  PairArray years_quantity_;   // wine's brewing years and number of bottles produced
  int years_;   // years of the wine
 public:
  // initialize label to l, number of years to y
  // vintage years to yr[], bottles to bot[]
  Wine(const char * l, int y, const int yr[], const int bot[])
    : label_(l), years_(y) {
     years_quantity_.first() = ArrayInt(yr, y);
     years_quantity_.second() = ArrayInt(bot, y);
  }
  // initialize label to l, number of years to y
  // create array objects of length y
  Wine(const char * l, int y)
      : label_(l), years_(y) {
    years_quantity_.first() = ArrayInt(y);
    years_quantity_.second() = ArrayInt(y);
  }
  Wine(){}
  void GetBottles();
  void Show() const;
  std::string Label() const {return label_;}
  int sum();  
};
#endif  // WINE_H_


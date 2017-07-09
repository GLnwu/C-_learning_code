/*************************************************************************
    > File Name: tabtenn1.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 09 Jul 2017 07:59:45 PM CST
 ************************************************************************/
#include "tabtenn1.h"  // NOLINT
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const string & fn,
    const string & ln, bool ht) : firstname(fn), lastname(ln), hasTable(ht) {}

void TableTennisPlayer::Name() const {
  std::cout << lastname << ", " << firstname;
}

// RatedPlayer methods
RatedPlayer::RatedPlayer(unsigned int r, const string & fn,
    const string & ln, bool ht) : TableTennisPlayer(fn , ln, ht) {
  rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r,
    const TableTennisPlayer & tp) : TableTennisPlayer(tp), rating(r) {}

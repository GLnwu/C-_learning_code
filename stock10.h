/*************************************************************************
    > File Name: stock10.h
    > Copyright @2016 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 19 Nov 2016 06:03:55 PM CST
 ************************************************************************/
// Stock class declaraction with constructors,destructor added
#ifndef STOCK10_H_
#define STOCK10_H_
#include <string>
#include <cstdint>

class Stock {
 private:
    std::string company;
    int64_t shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
 public:
  // two constructor
    Stock();    // Default constructor
    explicit Stock(const std::string & co, int64_t n = 0, double pr = 0.0);
    ~Stock();   // noisy destructor
    void buy(int64_t num, double price);
    void shell(int64_t num, double price);
    void update(double price);
    void show();
};

#endif  // STOCK10_H_

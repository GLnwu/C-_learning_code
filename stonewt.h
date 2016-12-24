/*************************************************************************
    > File Name: stonewt.h
    > Copyright @2016 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 24 Dec 2016 02:23:01 PM CST
 ************************************************************************/
// definitioin for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt {
 private:
  enum {Lbs_per_stn = 14};       // pounds per stone
  int stone;                     // whole stones
  double pds_left;               // fractions pounds
  double pounds;                 // entire weight in pounds
 public:
  explicit Stonewt(double lbs);   // constructor for double pounds
  Stonewt(int stn, double lbs);   // constructor for stone,lbs
  Stonewt();                      // defult constructor
  ~Stonewt();
  void show_lbs() const;          // show weight in pounds format
  void show_stn() const;          // show weight to stone format
};
#endif  // STONEWT_H_

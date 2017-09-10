/*************************************************************************
    > File Name: arraytp.h
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 09 Sep 2017 04:07:05 PM CST
 ************************************************************************/
// Array Template
#ifndef ARRAYTP_H_
#define ARRAYTP_H_
#include <iostream>
#include <cstdlib>

template <class T, int n>
class ArrayTP {
 private:
  T ar[n];
 public:
  ArrayTP() {};
  explicit ArrayTP(const T & v);
  virtual T & operator[](int i);
  virtual T operator[](int i) const;
};

template <class T, int n>
ArrayTP<T, n>::ArrayTP(const T & v) {
  for (int i = 0; i < n; i++) {
    ar[i] = v;
  }
}

template <class T, int n>
T & ArrayTP<T, n>::operator[](int i) {
  if(i < 0 || i >= n) {
    std::cerr << "Error in array limits: " << i
          << " is out range\n";
    std::exit(EXIT_FAILURE);
  }
  return ar[i];
}
template <class T, int n>
T ArrayTP<T, n>::operator[](int i) const {
  if(i < 0 || i >= n) {
    std::cerr << "Error in array limits: " << i
          << " is out range\n";
    std::exit(EXIT_FAILURE);
  }
  return ar[i];
}
#endif  // ARRAYTP_H_

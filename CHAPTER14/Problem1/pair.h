/*************************************************************************
    > File Name: CHAPTER14/Problem1/pair.h
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Mon 11 Sep 2017 10:57:24 PM CST
 ************************************************************************/
#ifndef CHAPTER14_PROBLEM1_PAIR_H_
#define CHAPTER14_PROBLEM1_PAIR_H_
template <class T1, class T2>
class Pair {
 private:
  T1 a;
  T2 b;
 public:
  T1 & first();
  T2 & second();
  T1 first() const {return a;}
  T2 second() const {return b;}
  Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) {}
  Pair() {}
};

template <class T1, class T2>
T1 & Pair<T1, T2>::first() {
  return a;
}

template <class T1, class T2>
T2 & Pair<T1, T2>::second() {
  return b;
}
#endif  // CHAPTER14_PROBLEM1_PAIR_H_

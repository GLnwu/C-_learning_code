/*************************************************************************
    > File Name: classic.h
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 22 Jul 2017 09:55:09 PM CST
 ************************************************************************/
#ifndef CHAPTER13_CLASSIC_H_
#define CHAPTER13_CLASSIC_H_
#include "cd.h"  // NOLINT

class Classic : public Cd {
 private:
  char primary_work[128];
 public:
  Classic(char * s1, char * s2, char * s3, int n, double x);
  virtual void Report() const;  // reports all Classic data
  virtual ~Classic() {}
};
#endif  // CHAPTER13_CLASSIC_H_

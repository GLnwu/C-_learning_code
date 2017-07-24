/*************************************************************************
    > File Name: VintagePort.h
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Mon 24 Jul 2017 09:38:59 PM CST
 ************************************************************************/
#include "port.h"
class VintagePort:public Port {
 private:
  char * nickname;
  int year;
 public:
  VintagePort();
  VintagePort(const char * br, const char * st, int b, const char * nn, int y);
  VintagePort(const VintagePort & vp);
  ~VintagePort() {delete [] nickname;}
  VintagePort & operator=(const VintagePort & vp);
  void Show() const;
  friend ostream & operator<<(ostream & os, const VintagePort & vp);
};

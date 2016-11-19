/*************************************************************************
    > File Name: golf.cpp
    > Copyright @2016 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Mon 07 Nov 2016 11:25:54 PM CST
 ************************************************************************/
#include "golf.h"
#include <string>
void setgolf(golf & g, const char * name, int hc) {
  strncpy(&g.fullname, name, strlen(name));
}

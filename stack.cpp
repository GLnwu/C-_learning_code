/*************************************************************************
    > File Name: stack.cpp
    > Copyright @2016 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 04 Dec 2016 08:42:46 PM CST
 ************************************************************************/
// Stack member function
#include "stack.h"
Stack::Stack() {
  top = 0;
}

bool Stack::isempty() const {
  return 0 == top;
}

bool Stack::isfull() const {
  return MAX == top;
}

bool Stack::push(const Item & item) {
  if (top < MAX) {
    items[top++] = item;
    return true;
  } else {
    return false;
  }
}

bool Stack::pop(Item * item) {
  if(top > 0) {
    *item = items[--top];
    return true;
  } else {
    return false;
  }
}

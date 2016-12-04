/*************************************************************************
    > File Name: stack.h
    > Copyright @2016 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Wed 30 Nov 2016 11:35:17 PM CST
 ************************************************************************/
// class definition for stack ADT
#ifndef STACK_H_
#define STACK_H_
#include <cstdint>
typedef uint64_t Item;

class Stack {
 private:
    enum {MAX = 10};  // const spicific to class
    Item items[MAX];  // holds stack items
    int16_t top;   // index for top stack item
 public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    // push() return false if stack already is full, true otherwise
    bool push(const Item & item);  // add item to stack
    // ppo() returns false if stack already is empty, true otherwise
    bool pop(Item * item);  // pop top into item
};
#endif  // STACK_H_

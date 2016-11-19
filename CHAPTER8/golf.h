/*************************************************************************
    > File Name: golf.h
    > Copyright @2016 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Mon 07 Nov 2016 10:59:47 PM CST
 ************************************************************************/
// for pe9-1.cpp

const int Len = 40;
struct golf {
  char fullname[Len];
  int  handicap;
};

// non-interactive version
// function sets golf structure to provided name, handicap
// using values passed as arguments to the function
void setgolf(golf & g, const char * name, int hc);

// interactive version:
// function solicits name and handicap from user
// and sets the members of g to the values enterd
// return 1 if name is enterd, 0 if name is empty string
int setgolf(golf & g);

//function resets handicap to new value
void handicap(golf & g, int hc);

//function displays contents of golf structure
void showgolf(const golf & g);

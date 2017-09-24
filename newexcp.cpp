/*************************************************************************
    > File Name: newexcp.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 24 Sep 2017 10:06:00 PM CST
 ************************************************************************/
#include <iostream>
#include <new>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;
using std::bad_alloc;

struct Big {
  double stuff[20000000];
};

int main() {
  Big* pb;
  try {
    cout << "Trying to get a big block of memory:\n";
    pb = new Big[100000];
    cout << "Got past the new request:\n";
  }
  catch (bad_alloc & ba) {
    cout << "Caught the exceptiong!\n";
    cout << ba.what() << endl;
    exit(EXIT_FAILURE);
  }
  cout << "Memory successfully allocated\n";
  pb[0].stuff[0] = 4;
  cout << pb[0].stuff[0] << endl;
  delete [] pb;
  return 0;
}

/*************************************************************************
    > File Name: Chapter13_1.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 22 Jul 2017 08:56:39 PM CST
 ************************************************************************/
#include <iostream>
using namespace std;
#include "classic.h"  // which will contain #include cd.h
void Bravo(const Cd & disk);

int main(void) {
  Cd c1("Beatles", "Capitol", 14, 35.5);
  Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C",
      "Alfred Brendel", "Philips", 2, 57.17);
  Cd *pcd = &c1;

  cout << "Using object directly:\n";
  c1.Report();    // use Cd method
  c2.Report();    // use Classic method

  cout << "Using type cd * pointer to objects:\n";
  pcd->Report();  // use Cd method for cd object
  pcd = &c2;
  pcd->Report();  // use Classic method for classic object

  cout << "Calling a function with a Cd reference argument:\n";
  Bravo(c1);
  Bravo(c2);

  cout << "Testing assigment: ";
  Classic copy;
  copy = c2;
  copy.Report();

  return 0;
}

void Bravo(const Cd & disk) {
  disk.Report();
}

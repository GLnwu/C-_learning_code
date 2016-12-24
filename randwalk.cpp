/*************************************************************************
    > File Name: randwalk.cpp
    > Copyright @2016 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Fri 23 Dec 2016 10:39:57 PM CST
 ************************************************************************/
// using the vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdint>
#include <cstdlib>  // rand(), srand(), prototypes
#include <ctime>    // time()  prototype
#include "vect.h"
int main(void) {
  using std::cin;
  using std::cout;
  using std::endl;
  using VECTOR::Vector;
  srand(time(0));  // seed random-number generator
  double direction;
  double target;
  double dstep;
  Vector step;
  Vector result(0.0, 0.0);
  uint64_t steps = 0;
  cout << "Enter target distance(q to quit): ";
  while (cin >> target) {
    cout << "Enter step length: ";
    if (!(cin >> dstep))
      break;

    while(result.magval() < target) {
      direction = rand() % 360;
      step.reset(dstep, direction, Vector::POL);
      result = result + step;
      steps++;
    }
    cout << "After " << steps << " steps, the subject "
        "has the fellowing location:\n";
    cout << result << endl;
    result.polar_mode();
    cout << " or\n" << result << endl;
    cout << "Average outward distance per step = "
         << result.magval() / steps << endl;
    steps = 0;
    result.reset(0.0, 0.0);
    cout << "Enter target distance(q to quit): ";
  }
  cout << "Bye!\n";
  cin.clear();
  while('\n' != cin.get())
    continue;
  return 0;
}

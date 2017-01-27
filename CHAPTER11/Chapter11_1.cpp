/*************************************************************************
    > File Name: randwalk.cpp
    > Copyright @2016 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Fri 23 Dec 2016 10:39:57 PM CST
 ************************************************************************/
// using the vector class
// compile with the vect.cpp file
#include <fstream>
#include <iostream>
#include <cstdio>
#include <cstdint>
#include <cstdlib>  // rand(), srand(), prototypes
#include <ctime>    // time()  prototype
#include "vect.h"   //NOLINT
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using VECTOR::Vector;
using std::fstream;
using std::ios;

int main(int argc, char * argv[]) {
  if (4 != argc) {
    cerr << "Argument num is not correct, please check." << endl;
    cerr << "Format: PROGRAM [TARGET] [STEP] [FILE]" << endl;
    return EXIT_FAILURE;
  }
  double direction;
  double target = atof(argv[1]);
  double dstep  = atof(argv[2]);
  Vector step;
  Vector result(0.0, 0.0);
  uint64_t steps = 0;
  srand(time(0));  // seed random-number generator
  fstream fout;

  fout.open(argv[3], ios::out);
  if (!fout.is_open()) {
    cerr << "Error!Failed to open the file" << endl;
    fout.clear();
    return EXIT_FAILURE;
  }

  fout << "Target Distance: " << target << " Step Size: " << dstep << endl;
  while (result.magval() < target) {
    direction = rand() % 360;   // NOLINT functionality is simple,does't have to use rand_r,it's also nor portable
    step.reset(dstep, direction, Vector::POL);
    result = result + step;
    steps++;
    fout << steps << ": " << result << endl;
  }
  fout << "After " << steps << " steps, the subject "
    "has the fellowing location:\n";
  fout << result << endl;
  result.polar_mode();
  fout << " or\n" << result << endl;
  fout << "Average outward distance per step = "
    << result.magval() / steps << endl;
  fout.close();
  return EXIT_SUCCESS;
}

/*************************************************************************
    > File Name: placenew1.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Thu 23 Mar 2017 11:04:28 PM CST
 ************************************************************************/
// new, placement new, no delete
#include <iostream>
#include <string>
#include <new>
using namespace std;  // NOLINT
const int BUF = 512;

class JustTesting {
 private:
    string words;
    int number;
 public:
    explicit JustTesting(const string & s = "Just Testing", int n = 0) {
      words = s; number = n; cout << words << "constructed\n";
    }
    ~JustTesting() {
      cout << words << "destroyed\n";
    }
    void Show() const {
      cout << words << ", " << number << endl;
    }
};

int main(void) {
  char * buffer = new char[BUF];         // get a block of memory
  JustTesting *pc1, *pc2;

  pc1 = new (buffer) JustTesting;       // place object in buffer
  pc2 = new JustTesting("Heap1", 20);   // place object on heap

  cout << "Memory block addresses:\n" << "buffer: "
       << reinterpret_cast<void *>(buffer) << "   heap: " << pc2 << endl;
  cout << "Memory contents:\n";
  cout << pc1 << ": ";
  pc1->Show();
  cout << pc2 << ": ";
  pc2->Show();

  JustTesting *pc3, *pc4;
  pc3 = new (buffer) JustTesting("Bad Idea", 6);
  pc4 = new JustTesting("Heap2", 10);
  cout << "Memory contents:\n";
  cout << pc3 << ": ";
  pc3->Show();
  cout << pc4 << ": ";
  pc4->Show();

  delete pc2;         // free heap1
  delete pc4;         // free heap4
  delete [] buffer;   // free buffer
  cout << "Done\n";
  return 0;
}

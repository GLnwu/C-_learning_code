/*************************************************************************
    > File Name: rtti1.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Mon 25 Sep 2017 10:23:50 PM CST
 ************************************************************************/
// using the RTTI dynamic_cast operator
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;

class Grand {
 private:
  int hold_;

 public:
  explicit Grand(int h = 0) : hold_(h) {}
  virtual void Speak() const {cout << "I am a grand class!\n";}
  virtual int Value() const {return hold_; }
  virtual ~Grand() {}
};

class Superb : public Grand {
 public:
  explicit Superb(int h = 0) : Grand(h) {}
  void Speak() const {cout << "I am a superb class!\n";}
  virtual void Say() const {
    cout << "I hold the superb value of " << Value() << "!\n";
  }
};

class Magnificent : public Superb {
 private:
  char ch;
 public:
  explicit Magnificent(int h = 0, char c = 'A') : Superb(h), ch(c) {}
  void Speak() const {cout << "I am a magnificent class!\n";}
  void Say() const {cout << "I am hold the character " << ch
    << " and the integer " << Value() << "!\n";
  }
};

Grand * GetOne();

int main() {
  std::srand(std::time(0));
  Grand* pg = nullptr;
  Superb* ps = nullptr;
  for (int i = 0; i < 5; i++) {
    pg = GetOne();
    pg->Speak();
    ps = dynamic_cast<Superb *>(pg);
    if (nullptr != ps) {
      ps->Say();
    }
    delete pg;
    pg = nullptr;
    ps = nullptr;
  }
  return 0;
}

Grand* GetOne() {
  Grand* p;
  switch (std::rand() % 3) {
    case 0 : p = new Grand(std::rand() % 100);
             break;
    case 1 : p = new Superb(std::rand() % 100);
             break;
    case 2 : p = new Magnificent(std::rand() % 100, 'A' + std::rand() % 26);
             break;
  }
  return p;
}

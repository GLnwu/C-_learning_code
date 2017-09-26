/*************************************************************************
    > File Name: rtti2.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Tue 26 Sep 2017 09:40:36 PM CST
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>
using std::cout;
using std::cin;
using std::endl;

class Grand {
 private:
  int hold;
 public:
  explicit Grand(int h = 0) : hold(h) {}
  virtual void Speak() const {cout << "I am a grand class!\n";}
  virtual int Value() const {return hold;}
  virtual ~Grand() {}
};

class Superb : public Grand {
 public:
  explicit Superb(int h = 0) : Grand(h) {}
  void Speak() const {cout << "I am a superb class!!\n";}
  virtual void Say() const {
    cout << "I hold the superb value of " << Value() << "!\n";
  }
};

class Magnificent : public Superb {
 private:
  char ch;
 public:
  explicit Magnificent(int h = 0, char cv = 'A') : Superb(h), ch(cv) {}
  void Speak() const { cout << "I am a magnificent class!\n"; }
  void Say() const {
    cout << "I hold the character " << ch <<
      " and the integer " << Value() << "!\n";
  }
};

Grand * GetOne();

int main() {
  srand(time(0));
  Grand* pg;
  Superb* ps;
  for (int i = 0; i < 5; i++) {
    pg = GetOne();
    cout << "Now processing type " << typeid(*pg).name() << ".\n";
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

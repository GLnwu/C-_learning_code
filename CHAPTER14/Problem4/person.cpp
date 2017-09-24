/*************************************************************************
    > File Name: person.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 24 Sep 2017 12:05:48 PM CST
 ************************************************************************/
#include "person.h"   // NOLINT
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cassert>
using std::cout;
using std::cin;
using std::endl;

// Person成员函数
  // protected
void Person::Get() {
  cout << "Enter surname: ";
  assert(cin >> surname_);
  cout << "Enter name: ";
  assert(cin >> name_);
}

void Person::Data() const {
  cout  << name_ << " "<< surname_ << endl;
}

// Gunslinger成员函数
  // protected
void Gunslinger::Get() {
  cout << "Ener pull gun speed: ";
  assert(cin >> pull_gun_speed_);
  cout << "Enter number of nick: ";
  assert(cin >> num_nick_);
}

void Gunslinger::Data() const {
  cout << "pull the gun speed: " << pull_gun_speed_ << endl;
  cout << "num of nick: " << num_nick_ << endl;
}

  // public
void Gunslinger::Set() {
  Person::Get();
  Get();
}

void Gunslinger::Show() const {
  Person::Data();
  Data();
}

// PokerPlayer成员函数
  // public
int PokerPlayer::Draw() const {
  srand(time(nullptr));
  return rand() % 50 + 1;
}

void PokerPlayer::Set() {
  Person::Get();
  Get();
}

void PokerPlayer::Show() const {
  Person::Data();
  // TODO(bingtang1021@gmail.com):
  // 之后可以定义Card类实现更友好化的实现下一张牌的花色和面值
  cout << "The next card: " << Draw() << endl;
}

// BadDude的公有成员函数
double BadDude::GDraw() const {
  return Gunslinger::Draw();
}

int BadDude::CDraw() const {
  return PokerPlayer::Draw();
}

void BadDude::Set() {
  Person::Get();
  Gunslinger::Get();
  PokerPlayer::Get();
}

void BadDude::Show() const {
  Person::Data();
  Gunslinger::Data();
  cout << "The pull gun speed: " << GDraw() << endl;
  PokerPlayer::Data();
  cout << "The next card: " << CDraw() << endl;
}

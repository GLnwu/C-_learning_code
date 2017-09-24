/*************************************************************************
    > File Name: person.h
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com
    > Created Time: Sat 23 Sep 2017 03:52:04 PM CST
 ************************************************************************/
// 14章第三题编程练习
#ifndef CHAPTER14_PROBLEM4_PERSON_H_
#define CHAPTER14_PROBLEM4_PERSON_H_
#include <string>
class Person {
 private:
  std::string surname_;
  std::string name_;

 protected:
  virtual void Data() const;
  virtual void Get();

 public:
  explicit Person(const std::string& surname = "null",
      const std::string& name = "null")
    : surname_(surname), name_(name) {}  // 当作默认构造函数
  std::string surname() const {return surname_;}
  std::string name() const {return name_;}
  void set_surname(const std::string& surname) {surname_ = surname;}
  void set_name(const std::string& name) {name_ = name;}
  virtual void Set() = 0;
  virtual void Show() const = 0;
};

class Gunslinger : virtual public Person {
 private:
  double pull_gun_speed_;   // 拔枪速度
  int num_nick_;             // 手枪刻痕数

 protected:
  virtual void Data() const;
  virtual void Get();

 public:
  Gunslinger()
    : Person(), pull_gun_speed_(0.0), num_nick_(0) {}
  Gunslinger(const std::string& surname,
             const std::string& name,
             double pull_gun_speed = 0.0,
             int num_nick = 0)
    : Person(surname, name),
             pull_gun_speed_(pull_gun_speed),
             num_nick_(num_nick) {}
  Gunslinger(const Person& person,
             double pull_gun_speed = 0.0,
             int num_nick = 0)
    : Person(person),
      pull_gun_speed_(pull_gun_speed),
      num_nick_(num_nick) {}
  void set_pull_gun_speed(double speed) { pull_gun_speed_ = speed;}
  void set_num_nick(int num_nick) {num_nick_ = num_nick;}
  double pull_gun_speed() const {return pull_gun_speed_;}
  int num_nick() const {return num_nick_;}
  double Draw() const {return pull_gun_speed_;}
  virtual void Set();
  virtual void Show() const;
};

class PokerPlayer : virtual public Person {
 protected:
  virtual void Data() const {}
  virtual void Get() {}
 public:
  PokerPlayer() {}
  PokerPlayer(const std::string& surname, const std::string& name)
    : Person(surname, name) {}
  explicit PokerPlayer(const Person& person)
    : Person(person) {}
  int Draw() const;   // 返回一个1-52的随机数
  virtual void Set();
  virtual void Show() const;
};

class BadDude : public Gunslinger, public PokerPlayer {
 protected:
  virtual void Data() const {}
  virtual void Get() {}

 public:
  BadDude() {}
  BadDude(const std::string& surname, const std::string& name,
      double pull_gun_speed, int num_nick)
    : Person(surname, name),
      Gunslinger(surname, name, pull_gun_speed, num_nick),
      PokerPlayer(surname, name) {}
  BadDude(const Person& person, double pull_gun_speed, int num_nick)
    : Person(person),
      Gunslinger(person, pull_gun_speed, num_nick),
      PokerPlayer(person) {}
  explicit BadDude(const Gunslinger& gunslinger)
    : Person(gunslinger),
      Gunslinger(gunslinger),
      PokerPlayer(gunslinger) {}
  BadDude(const PokerPlayer& pokerplayer, double pull_gun_speed, int num_nick)
    : Person(pokerplayer),
      Gunslinger(pokerplayer, pull_gun_speed, num_nick),
      PokerPlayer(pokerplayer) {}
  double GDraw() const;  // 拔枪时间
  int CDraw() const;     // 下一张扑克牌花色
  virtual void Set();
  virtual void Show() const;
};
#endif  // CHAPTER14_PROBLEM4_PERSON_H_

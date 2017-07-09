/*************************************************************************
    > File Name: usett1.cpp
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 09 Jul 2017 08:18:49 PM CST
 ************************************************************************/
#include <iostream>
#include "tabtenn1.h" // NOLINT

int main(void) {
  using std::cout;
  using std::endl;
  TableTennisPlayer player1("Tara", "Boomdea", false);  // 基类初始化
  RatedPlayer rplayer1(1140, "Mallory", "Duck", true);  // 派生类初始化
  rplayer1.Name();    // derived object uses base method
  if (rplayer1.HasTable()) {
    cout << ": has a table.\n";
  } else {
    cout << ": hasn't a table.\n";
  }
  player1.Name();    // base object uses base method
  if (player1.HasTable()) {
    cout << ": has a table";
  } else {
    cout << ": hasn't a table.\n";
  }
  cout << "Name: ";
  rplayer1.Name();
  cout << "; Rating:" << rplayer1.Rating() << endl;
  // initialize RatedPlayer using TableTennisPlayer object
  // 利用派生类定义的构造函数将基类作为参数，传入，初始化派生类对象
  RatedPlayer rplayer2(1122, player1);
  cout << "Name: ";
  rplayer2.Name();
  cout << "; Rating: " << rplayer2.Rating() << endl;

  return 0;
}

/*************************************************************************
    > File Name: firstref.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 28 Aug 2016 01:55:10 AM CST
 ************************************************************************/
#include <iostream>
int main(void)
{
	using namespace std;
	int rats = 101;
	int & rodents = rats;	//rodent is a reference

	cout << "rats: " << rats;
	cout << " rodents = " << rodents << endl;
	rodents++;
	cout << "rats: " << rats;

	cout << " rodents = " << rodents << endl;

	//some implementions require type casting the fellowing
	//address to type unsigned
	cout << "rats address = " << &rats << endl;
	cout << "rodents address = " << &rodents << endl;
	return 0;
}

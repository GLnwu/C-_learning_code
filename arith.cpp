/*************************************************************************
    > File Name: arith.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Tue 15 Mar 2016 10:22:30 PM CST
 ************************************************************************/
//arith.cpp -- some C++ arithmetic
#include<iostream>
int main()
{
	using namespace std;
	float hats,heads;

	cout.setf(ios_base::fixed,ios_base::floatfield);	//fixed-point
	cout << "Enter a number:";
	cin  >> hats;
	cout << "Enter another number:";
	cin  >> heads;

	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads =" << hats + heads << endl;
	cout << "hats - heads =" << hats - heads << endl;
	cout << "hats * heads =" << hats * heads << endl;
	cout << "hats / heads =" << hats / heads << endl;

	return 0;
}

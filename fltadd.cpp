/*************************************************************************
    > File Name: fltadd.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Tue 15 Mar 2016 10:16:45 PM CST
 ************************************************************************/
//fltadd.cpp -- precision problems with float
#include<iostream>
int main()
{
	using namespace std;
	float a = 2.34E+22f;
	float b = a + 1.0f;

	cout << "a = " << a << endl;
	cout << "b - a = " << b -a << endl;
	return 0;
}

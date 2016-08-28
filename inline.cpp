/*************************************************************************
    > File Name: inline.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 30 Jul 2016 11:46:59 PM CST
 ************************************************************************/
//inline.cpp -- using an inline fuction
#include <iostream>

//an inline function definition
inline double square(double x){ return x * x; }

int main(void)
{
	using namespace std;
	double a,b;
	double c = 13.0;

	a = square(5.0);
	b = square(4.5+7.5);
	cout << "a = " << a << ", b = " << b << "\n";
	cout << "c = " << c;
	cout << ",c squared = " << square(c++) << "\n";
	cout << "Now c = " << c << "\n";
	return 0;
}

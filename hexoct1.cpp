/*************************************************************************
    > File Name: hexoct1.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Tue 15 Mar 2016 04:13:21 PM CST
 ************************************************************************/
// hexoct1.cpp -- shows hex and octal literals
#include<iostream>
int main()
{
	using namespace std;
	int chest = 42;		//decimal integer literal
	int waist = 0x42;	//hexdecimal integer literal
	int inseam = 042;	//octal integer literal
	
	
	cout <<"chest = " << chest << inseam<<endl;
	cout << "waist = 0x" <<waist<< inseam<<endl;
	cout << "inseam = 0"<<oct<< inseam<<endl;

	return 0;
}

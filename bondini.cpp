/*************************************************************************
    > File Name: bondini.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Tue 15 Mar 2016 05:38:17 PM CST
 ************************************************************************/
//bondini.cpp -- using escape sequences
#include<iostream>
int main(void)
{
	using namespace std;
	cout << "\aOperation \"HyperHype\" is now actived!\n";
	cout << "Enter your agent code:__________\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered " << code <<"...\n";
	cout << "\aCode verified! Proceed with Plan Z3!\n";
	return 0;
}

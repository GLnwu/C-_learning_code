/*************************************************************************
    > File Name: funtemp.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Tue 04 Oct 2016 02:26:20 AM CST
 ************************************************************************/
//funtemp.cpp -- using function template
#include <iostream>
//function template prototype
template <typename T>	//or class T
void Swap(T &a,T &b);

int main(void)
{
	using namespace std;
	int i = 10;
	int j = 20;
	cout << "i,i = " << i << ", " << j << ".\n";
	cout << "Using compiler-generated int swapper:\n";
	Swap(i,j);	//generate void Swap(int &,int &)
	cout << "Now i,i = " << i << ", " << j << ".\n";
	//cin.get();
	return 0;
}


template <typename T>	//or class T
void Swap(T &a,T &b)
{
	T temp;
	temp = a;
	a    = b;
	b    = temp;
}

/*************************************************************************
    > File Name: formore.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Mon 30 May 2016 11:48:39 PM CST
 ************************************************************************/
//formore.cpp -- more looping with for
#include<iostream>
const int ArSize = 16;	//example of external declaration
int main(void)
{
	long long factorials[ArSize];
	factorials[1] = factorials[0] = 1LL;
	
	for(int i = 2;i < ArSize;i++)
	{
		std::cout << i << " != "<<factorials[i] << std::endl;
	}
       return 0;	
}

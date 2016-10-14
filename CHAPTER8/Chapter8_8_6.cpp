/*************************************************************************
    > File Name: Chapter8_8_6.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 15 Oct 2016 12:12:43 AM CST
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include "common.h"
//计算并返回N个数组的最大值
template <typename T>
T maxn(T Array[],const unsigned int Count);

int main(void)
{
	using namespace std;
	int A[6];
	double B[4];
	unsigned int len;

	cout << "Input 5 int number: " << endl;
	GET_ARRAY_LEN(A,len);
	if(EXIT_SUCCESS == fill_array(A,len))
	{
		show_array(A,len);
		cout << "max number is: " << maxn(A,len) << endl;

	}
	
	GET_ARRAY_LEN(B,len);
	if(EXIT_SUCCESS == fill_array(B,len))
	{
		show_array(B,len);
		cout << "max number is: " << maxn(B,len) << endl;

	}		

	return EXIT_SUCCESS;
}
template <typename T>
T maxn(T Array[],const unsigned int Count)
{
	T max = Array[0];
	for(int i = 1;i < Count;i++){
		if(Array[i] > max){
			max = Array[i];
		}
	}
	return max;
}


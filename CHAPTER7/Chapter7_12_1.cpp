/*************************************************************************
    > File Name: Chapter7_12_1.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 28 Aug 2016 05:20:32 PM CST
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include "common.h"
#define MAX_NUMBER 2 //求调和平均数的个数
//求number个数字的的调和平均数
double	calculate(const double Array[],const int Number); 

int main(void)
{
	using namespace std;
	cout << "Please input "<< MAX_NUMBER <<" number"<<endl;
	double Array[MAX_NUMBER];
	while(EXIT_FAILURE != fill_array(Array,MAX_NUMBER))
	{
		cout << calculate(Array,MAX_NUMBER) << endl;
	}	
	return EXIT_SUCCESS;
}

double	calculate(const double Array[],const int Number)
{
	double 	temp = 0;
	int 	i;

	for(i = 0;i < Number;i++)
	{
		temp = temp + (1 / Array[i]);
	}	
	temp = Number / temp;

	return temp;
}	

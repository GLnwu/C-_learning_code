/*************************************************************************
    > File Name: common.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 02 Oct 2016 11:40:56 PM CST
 ************************************************************************/
#include <iostream>
#include "common.h"
#include <cstdlib>
#include <cmath>
//填充数字到数据中
int 	fill_array(double Array[],const unsigned int Number)
{
	using namespace std;
	int i;
	double temp;
	for ( i = 0; i < Number;i++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if(!cin)
		{
			cin.clear();
			while('\n' == cin.get())
			{
				continue;
			}
			cout << "Bad input: input process terminated.\n";
			break;
		}
		else if(0 == temp){
		break;
		}
		Array[i] = temp;
	}
	if(Number != i)
	{
		return EXIT_FAILURE; 
	}
	return EXIT_SUCCESS;
}

int show_array(const double Array[],const unsigned int Number)
{
	using namespace std;
	if(NULL == Array)
	{
		return EXIT_FAILURE;
	}
	int i;
	for(i = 0;i < Number;i++)
	{
		cout << Array[i] << " ";
	}
	return EXIT_SUCCESS;
}
double average(const double Array[],const unsigned int Number)
{
	return (sum(Array,Number) / Number);		
}
double sum(const double Array[],const unsigned int Number)
{
	using namespace std;
	int i;
	double temp = 0;
	for(i = 0; i < Number; i++)
	{
		temp = temp + Array[i];
	}
	return temp;
}

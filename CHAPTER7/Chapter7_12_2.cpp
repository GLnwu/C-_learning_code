/*************************************************************************
    > File Name: Chapter7_12_2.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 02 Oct 2016 11:49:04 PM CST
 ************************************************************************/
#include <iostream>
#include "common.h"
#define MAX_USER 10

int main(void)
{
	double array[MAX_USER];
	using namespace std;
	if(EXIT_SUCCESS != fill_array(array,MAX_USER))
	{
		return EXIT_FAILURE;
	}
	if(EXIT_SUCCESS != show_array(array,MAX_USER))
	{
		return EXIT_FAILURE;
	}
	cout << "Average number is : ";
	cout <<  average(array,MAX_USER) << endl; 
	return EXIT_SUCCESS;
}

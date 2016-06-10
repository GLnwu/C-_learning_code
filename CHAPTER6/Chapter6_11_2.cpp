/*************************************************************************
    > File Name: Chapter6_11_2.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Fri 10 Jun 2016 01:36:30 AM CST
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <array>
const int MAX  = 10;
int main(void)
{
	using namespace std;
	array<double,10> donations;

	unsigned int 	i = 0;
	double 		sum = 0;
	while(i < MAX && cin >> donations[i]){
		sum = sum + donations[i];
		i++;
	}
	if(i > 0)
	{
		cout << "Mean value of donation array is " << sum/i << endl;
	}
	else
	{
		cout << "No valid value is given,Please ensure you have input the numbers. " << endl;
	}
	return EXIT_SUCCESS;
}

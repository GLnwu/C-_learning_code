/*************************************************************************
    > File Name: carrots.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年03月08日 星期二 16时49分14秒
 ************************************************************************/
#include<iostream>

int main(void)
{
	using namespace std;

	int carrots;		//declare an integer variable

	carrots = 25;		//assign a value to the variable

	cout << "I have ";
	cout << carrots;	//display the value of the variable
	cout << "carrots.";	//display the value of the variable
	cout << endl;
	carrots = carrots -1;	//modify the variable
	cout << "Crunch,crunch.Now I have " << carrots << " carrots."<<endl;
	
	return 0;
}

/*************************************************************************
    > File Name: getinfo.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年03月08日 星期二 17时26分36秒
 ************************************************************************/
//getinfo.cpp -- input adn output
#include<iostream>

int main(void)
{
	using namespace std;

	int carrots;

	cout << "How many carrots do you have?"<<endl;
	cin >> carrots;			//C++ input
	cout << "Here are two more.";
	carrots = carrots + 2;
	//the next line concatenates output
	cout << "Now you have " << carrots << " carrots."<<endl;
	return 0;
}


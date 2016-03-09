/*************************************************************************
    > File Name: sqrt.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2016年03月08日 星期二 17时53分17秒
 ************************************************************************/
#include<iostream>
#include<cmath>	//or math.h

int main(void)
{
	using namespace std;

	double area;
	cout << "Enter the floor area,in square feet,of your home:";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "That's the equivalent of a square " << side
	     << " feet to the side." << endl;
	cout << "How fascinating!" << endl;
	return 0;	
}



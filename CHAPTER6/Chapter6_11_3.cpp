/*************************************************************************
    > File Name: Chapter6_11_3.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Tue 28 Jun 2016 11:13:48 PM CST
 ************************************************************************/
#include <iostream>

int main(void)
{
	using namespace std;
	char ch;
	bool notvalid = true;		//标识输入的字母是否是有效的

	cout << "Please enter one of the following choices:" << endl;
	cout << "c) carnivore	p) pianist" << endl;
	cout << "t) tree		g) game" << endl;
	cout << "f" << endl;
	cout << "Please enter a c, p, t, or g: ";
	cin >> ch;

	while(notvalid){
		switch (ch){
			case 'c' :
			case 'C' : cout << "carnivore"		<< endl;notvalid = false;break;
			case 'p' :
			case 'P' : cout << "pianist" 		<< endl;notvalid = false;break;
			case 't' :
			case 'T' : cout << "A maple is a tree"	<< endl;notvalid = false;break;
			default  : cout << "Please enter a valid character" << endl;;
				   cout << "Please enter a c, p, t, or g: ";
				   cin >> ch; 
		}
	}
}

/*************************************************************************
    > File Name: compstr2.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 23 Jul 2016 08:25:16 PM CST
 ************************************************************************/
//compstr2.cpp -- comparing strings using array
#include<iostream>
#include<string>
int main(void)
{
	using namespace std;
	string word = "?ate";

	for(char ch = 'a';word != "mate";ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends,word";
	return 0;
}

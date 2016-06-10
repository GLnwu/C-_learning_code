/*************************************************************************
    > File Name: Chapter6_11_1.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Fri 10 Jun 2016 01:23:04 AM CST
 ************************************************************************/
#include <iostream>
#include <cctype>

int main(void)
{
	using namespace std;

	char 	ch;
	while('@' != (ch = cin.get())){
		if(isupper(ch)){
			ch = tolower(ch);
		}
		else if(islower(ch)){
			ch = toupper(ch);
		}
		if(!isdigit(ch)){
			cout << ch;
		}
	}
}

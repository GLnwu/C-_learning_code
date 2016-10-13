/*************************************************************************
    > File Name: Chapter8_8_3.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Tue 04 Oct 2016 03:29:09 PM CST
 ************************************************************************/
#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
const int MAXLEN = 1024;
//将传入的字符数组转换为大写
bool stringToUpper(std::string & str);

int main(void)
{
	using namespace std;
	string  str;
	cout << "Enter a string (q to quit): ";
	while (getline(cin,str) && 'q' != str[0])
	{
		stringToUpper(str);
		cout << str << endl;
		cout << "Enter a string (q to quit): ";
	}
	cout << "Bye." << endl;
	return EXIT_SUCCESS;
}

bool stringToUpper(std::string & str)
{
	if(str.empty()){
		return EXIT_FAILURE;
	}
	auto len = str.size();

	for(decltype (len) i = 0;i < len;i++)	{
		if(islower(str[i])){
			str[i] = toupper(str[i]);
		}
	}
	return EXIT_SUCCESS;
}


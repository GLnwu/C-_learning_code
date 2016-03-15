/*************************************************************************
    > File Name: test.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Tue 15 Mar 2016 03:53:46 PM CST
 ************************************************************************/
#include<iostream>

int main()
{

	using namespace std;
	int k\u00F6rper;
	
	cout << "Let them eat g\u222Bteau.\n" ;
	
	return 0;
}
/* g++ can't be of utf-8/utf-16 or whatever encoding.
 * So if you store your source file as UTF-8,you cannot have a variable like:
 * int föasd;
 * it had to be written like:
 * int f\u00F6asd.
 * When use g++,you have to specify the -fextended-identifiers flag when compiling
 */

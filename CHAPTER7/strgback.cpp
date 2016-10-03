/*************************************************************************
    > File Name: strgback.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Tue 30 Aug 2016 09:03:19 PM CST
 ************************************************************************/
//strgback.cpp -- a function that returns a pointers to char
#include <iostream>
const bool ERROR = true;
const bool OK = false;
char * buildstr(char c,int n);	//prototype
int main(void)
{
	using namespace std;
	int times;
	char ch;

	cout << "Enter a chararcter: ";
	cin >> ch;
	cout << "Enter a integer: ";
	cin >> times;
	char * ps = buildstr(ch,times);
	if(NULL == ps){
		return ERROR;
	}
	cout << ps << endl;
	delete [] ps;
	ps = buildstr('+',20); //reuse pointer
	cout << ps << "-DONE-" << ps << endl;
	delete [] ps;

	return 0;
}

char * buildstr(char c,int n){
	if(n < 0){
		return NULL;
	}
	char *pstr = new char[n+1];
	pstr[n] = '\0';
	while(n-- > 0){
		pstr[n] = c;
	}
	return pstr;
}

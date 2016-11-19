/*************************************************************************
    > File Name: leftover.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Tue 04 Oct 2016 01:47:41 AM CST
 ************************************************************************/
//leftover.cpp -- overloading the left() functions
#include <iostream>
#include <cstdlib>
unsigned long left(unsigned long num,unsigned ct);
char * left(const char * str,int n = 1);

int main(void)
{
	using namespace std;
	const char * trip = "Hawaii!!";	//test value
	unsigned long n = 12345678;	//test value
	int i;
	char * temp;

	for(i = 1;i < 10;i++)
	{
		cout << left(n,i) << endl;
		temp = left(trip,i);
		cout << temp << endl;
		delete [] temp;	//point to temporary storage
	}
	return 0;
}

//This functions returns the first ct digits of the number num.
unsigned long left(unsigned long num,unsigned ct)
{
	unsigned digits = 1;
	unsigned long n = num;

	if(0 == ct || 0 == num)
	{
		return 0;	//return zero if no digits
	}
	while(n /= 10)
	{
		digits++;
	}
	if(digits > ct)
	{
		ct = digits - ct;
		while(ct--)
		{
			num /= 10;
		}
		return num;	//return left ct digits;
	}
	else	//if ct >= number of digits
	{
		return num;
	}
}

//This function returns a pointer to a new string
//consisting of the first n chararcters in the str string.
char * left(const char *str,int n)
{	
	if(n < 0){
		n = 0;
	}
	char * p = new char[n+1];
	int i;

	for(i = 0; i < n && str[i];i++)
	{
		p[i] = str[i];	//copy characters
	}
	while(i <= n)
	{
		p[i++] = '\0';	//set rest of string to '\0'
	}
	return p;
}

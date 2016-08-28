/*************************************************************************
    > File Name: swaps.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 31 Jul 2016 01:35:30 AM CST
 ************************************************************************/
//swaps.cpp -- swapping with references and with pointers
#include <iostream>
void swapr(int & a,int & b);	//a,b ara aliases for ints
void swapp(int * p,int * q);	//p,q are addresses of ints
void swapv(int a,int b);		//a,b are new variables
int main(void)
{
	using namespace std;
	int wallet1 = 300;
	int wallet2 = 350;

	cout << "wallet1 = $ " << wallet1;
	cout << " wallet2 = $ " << wallet2 << endl;

	cout << "Using references to swap contents:\n";
	swapr(wallet1,wallet2);	//pass variables
	
	cout << "Using pointers to swap contents again:\n";
	swapp(&wallet1,&wallet2);	//pass addresses of variables
	cout << "wallet1 = $ " << wallet1;
	cout << " wallet2 = $ " << wallet2 << endl;

	cout << "wallet1 = $ " << wallet1;
	cout << " wallet2 = $ " << wallet2 << endl;

	cout << "Trying to use passing by value:\n";
	swapv(wallet1,wallet2);		//pass values of variables
	cout << "wallet1 = $ " << wallet1;
	cout << " wallet2 = $ " << wallet2 << endl;
	return 0;	
}
void swapr(int & a,int & b)	//use references
{
	int temp;

	temp = a;	//use a,b for values of variables
	a = b;
	b = temp;
}

void swapp(int * p,int * q)
{
	int temp;

	temp = *p;	//use *p,*q for values of variables
	*p = *q;
	*q = temp;
}

void swapv(int a,int b)
{
	int temp;

	temp = a;	//use a,b for values of variables
	a = b;
	b = temp;
}

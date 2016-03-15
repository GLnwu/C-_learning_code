/*************************************************************************
    > File Name: morechar.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Tue 15 Mar 2016 04:24:04 PM CST
 ************************************************************************/
//morechar.cpp -- the char type and int type contrasted
#include<iostream>
int main()
{
	using namespace std;
	char ch = 'M';		//assign ASCII code for M to ch
	int i = ch;		//store sam code int an int
	cout << "The ASCII code for "<< ch << " is "<< i <<endl;

	cout << "Add one to the character code:" << endl;
	ch = ch + 1;		//change character code in ch
	i = ch;			//save new character code in i
	cout << "The ASCII code for " << ch << " is "<< i << endl;
	//using the cout.put()	member function to display a char
	cout << "Displaying char ch using cout.put(ch):";
	cout.put(ch);
	//using cout.put() to display a char constant
	cout.put('!');

	cout << endl << "Done" <<endl;

	return 0;
}

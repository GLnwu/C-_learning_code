/*************************************************************************
    > File Name: limits.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Tue 15 Mar 2016 03:17:25 PM CST
 ************************************************************************/
// limits.cpp -- some integer limits
#include<iostream>
#include<climits>	//use limits.h for older systems
#include<iomanip>
int main()
{
	using namespace std;
	int n_int = INT_MAX;		//initialize n_int to max int value
	short n_short = SHRT_MAX;	//symbols defined in climits file
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;	

	//sizeof operator yields size of type or of variable
	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "short is " << sizeof n_short << " bytes." << endl;
	cout << "long is " << sizeof n_long << " bytes." << endl;
	cout << "long long is " << sizeof n_llong << " bytes." << endl;
	cout << endl;

	cout << "Maximum values:" << endl;
	cout << "int:\t\t\t" << n_int <<endl;
	cout << "short:\t\t\t" << n_short <<endl;
	cout << "long:\t\t\t" << n_long << endl;
	cout << "long long:\t\t\t" << n_llong <<endl;

	cout << "Minimum int value = " << INT_MIN << endl;
	cout << "Bits per type = " << CHAR_BIT << endl;

	return 0;
}

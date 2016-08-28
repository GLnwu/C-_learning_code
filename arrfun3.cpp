/*************************************************************************
    > File Name: arrfun4.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Thu 25 Aug 2016 10:14:52 PM CST
 ************************************************************************/
//arrfun3.cpp -- array functions and const
#include <iostream>
const int Max = 5;
//function prototypes
int fill_array(double ar[],int limit);
void show_array(const double ar[],int n);	//don't change data
void revalue(double r,double ar[],int n);

int main(void)
{
	using namespace std;
	double properties[Max];

	int size = fill_array(properties,Max);
	show_array(properties,size);
	if(size > 0)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while(!(cin >> factor)){ // bad input
			continue;
		}
		cout << "Bad input please enter a number: ";	
		revalue(factor,properties,size);
		show_array(properties,size);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;
}
//读入键盘输入，将合法数字存放到数组ar中
int fill_array(double ar[],int limit)
{
	using namespace std;
	double 		temp;
	int		i;

	for (i = 0;i < limit;i++)
	{
		cout << "Enter value #" << (i + 1) <<": ";
		cin >> temp;
		//输入内容不合法，或者temp存储的值为负数
		if(!cin)	//bad input
		{
			cin.clear();
			while('\n' != cin.get()){
				continue;
			}
			cout << "Bad input;input process terminated.\n";
			break;
		}
		else if (temp < 0){	//signal to terminate
			break;
		}
		ar[i] = temp;
	}
	return i;
}

//the function can use,but not alter,
//the array function address is ar
void show_array(const double ar[],int n)
{
	using namespace std;
	for (int i = 0; i < n; i++){
		cout << "Property #" <<(i + 1) << ": $";
		cout << ar[i] << endl;
	}
}

//multiplies each element of ar[] by r
void revalue(double r,double ar[],int n)
{
	for(int i = 0;i < n;i++)
	{
		ar[i] *= r;
	}
}

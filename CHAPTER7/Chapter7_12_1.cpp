/*************************************************************************
    > File Name: Chapter7_12_1.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sun 28 Aug 2016 05:20:32 PM CST
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#define MAX_NUMBER 2 //求调和平均数的个数
//求number个数字的的调和平均数
double	calculate(const double Array[],const int Number); 
//填充数字到数据中
int 	fill_array(double Array[],const int Number);

int main(void)
{
	using namespace std;
	cout << "Please input "<< MAX_NUMBER <<" number"<<endl;
	double Array[MAX_NUMBER];
	while(EXIT_FAILURE != fill_array(Array,MAX_NUMBER))
	{
		cout << calculate(Array,MAX_NUMBER) << endl;
	}	
	return EXIT_SUCCESS;
}

int 	fill_array(double Array[],const int Number)
{
	using namespace std;
	int i;
	double temp;
	for ( i = 0; i < Number;i++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if(!cin)
		{
			cin.clear();
			while('\n' == cin.get())
			{
				continue;
			}
			cout << "Bad input: input process terminated.\n";
			break;
		}
		else if(0 == temp){
		break;
		}
		Array[i] = temp;
	}
	if(Number != i)
	{
		return EXIT_FAILURE; 
	}
	return EXIT_SUCCESS;
}

double	calculate(const double Array[],const int Number)
{
	double 	temp = 0;
	int 	i;

	for(i = 0;i < Number;i++)
	{
		temp = temp + (1 / Array[i]);
	}	
	temp = Number / temp;

	return temp;
}	

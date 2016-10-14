/*************************************************************************
    > File Name: Chapter8_8_5.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Fri 14 Oct 2016 12:09:28 AM CST
 ************************************************************************/
#include <iostream>
#include <cstdlib>

//求最大数据元素，并返回最大的数组元素
template <typename T>
T max5(T Array[]);

//填充数组内容
template <typename T>
int fill_array(T Array[],const unsigned int Number);

//显示数组内容
template <typename T>
int show_array(const T Array[],const unsigned int Number);

int main(void)
{
	using namespace std;
	int A[5];
	double B[5];	

	cout << "Input 5 int number: " << endl;
	if(EXIT_SUCCESS == fill_array(A,5))
	{
		show_array(A,5);
		cout << "max number is: " << max5(A) << endl;
	}
	cout << "Input 5 double number: " << endl;
	if(EXIT_SUCCESS == fill_array(B,5))
	{
		show_array(B,5);
		cout << "max number is: " << max5(B) << endl;
	}

	return EXIT_SUCCESS;
}

//求数组中的最大值
template <typename T>
T max5(T Array[])
{
	T max = Array[0];
	for(int i = 1; i < 5;i++){
		if(Array[i] > max){
			max = Array[i];
		}
	}
	return max;
}

//填充数组内容
template <typename T>
int fill_array(T Array[],const unsigned int Number)
{
	using namespace std;
	int i;
	T temp;
	for ( i = 0; i < Number;i++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if(!cin)
		{
			cin.clear();
			while('\n' != cin.get())
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

//显示数组内容
template <typename T>
int show_array(const T Array[],const unsigned int Number)
{
	using namespace std;
	if(NULL == Array)
	{
		return EXIT_FAILURE;
	}
	int i;
	for(i = 0;i < Number;i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
	return EXIT_SUCCESS;
}

/*************************************************************************
    > File Name: common.h
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 15 Oct 2016 12:15:58 AM CST
 ************************************************************************/
#include <iostream>
#include <cstdlib>
//填充数组内容
template <typename T>
int fill_array(T Array[],const unsigned int Number);

//显示数组内容
template <typename T>
int show_array(const T Array[],const unsigned int Number);


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

/*************************************************************************
    > File Name: common.h
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 15 Oct 2016 12:15:58 AM CST
 ************************************************************************/
//模板函数的声明与定义，一般都放在头文件中，隐式实例化模板函数时会用到，具体为啥还不清楚
#include <iostream>
#include <cstdlib>
#include <cstring>
#define MAX_ARRAY_LEN 128
//获取数组长度
#define GET_ARRAY_LEN(array,len) {len = (sizeof(array)/sizeof(array[0]));}
//填充数组内容
template <typename T>
int fill_array(T Array[],const unsigned int Number);
//填充数据内容，显示具体化模板，处理字符串指针
template <> int fill_array<char *>(char * Array[],const unsigned int Number);
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
		Array[i] = temp;
	}
	if(Number != i){
		return EXIT_FAILURE; 
	}
	return EXIT_SUCCESS;
}

//填充数据内容，显示具体化模板，处理字符串指针
template <> int fill_array<char *>(char * Array[],const unsigned int Number)
{
	using namespace std;
	char *temp = new char[MAX_ARRAY_LEN];
	size_t count;
	int i;

	for (i = 0; i < Number;i++){
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if(!cin){
			cin.clear();
			while('\n' != cin.get()){
				continue;
			}
			cout << "Bad input: input process terminated.\n";
			break;
		}
		//最多复制MAX_ARRAY_LEN个字符到字符指针中，
		//大于等于MAX_ARRAY_LEN个字符时，只复制MAX_ARRAY_LEN - 1个,留一个当作结束符
		count =( strlen(temp) >= MAX_ARRAY_LEN ) ? (MAX_ARRAY_LEN - 1):(strlen(temp) + 1);
		temp[strlen(temp)+1] = '\0';
		strncpy(Array[i],temp,count);
	}
	delete [] temp;
	temp = NULL;
	if(Number != i){
		return EXIT_FAILURE; 
	}

	return EXIT_SUCCESS;
}
//显示数组内容
template <typename T>
int show_array(const T Array[],const unsigned int Number)
{
	using namespace std;
	if(NULL == Array){
		return EXIT_FAILURE;
	}
	int i;

	for(i = 0;i < Number;i++){
		cout << Array[i] << " " << endl;
	}
	cout << endl;

	return EXIT_SUCCESS;
}

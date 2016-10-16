/*************************************************************************
    > File Name: Chapter8_8_6.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Sat 15 Oct 2016 12:12:43 AM CST
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include "common.h"
#define MAXLEN 4 //字符指针数组的最大长度
//计算并返回N个数组的最大值
template <typename T>
T maxn(T Array[],const unsigned int Count);
//maxn的显示具体化，处理字符串指针
template <> char * maxn<char *>(char * Array[],const unsigned int Count);

int main(void)
{
	using namespace std;
	int A[6];
	double B[4];
	char * C[MAXLEN];
	unsigned int len;
	
	cout << "Input 6 int number: " << endl;
	GET_ARRAY_LEN(A,len);
	if(EXIT_SUCCESS == fill_array(A,len)){
		show_array(A,len);
		cout << "max number is: " << maxn(A,len) << endl;
	}
	
	cout << "Input 4 double number: " << endl;
	GET_ARRAY_LEN(B,len);
	if(EXIT_SUCCESS == fill_array(B,len)){
		show_array(B,len);
		cout << "max number is: " << maxn(B,len) << endl;
	}

	cout << "Input "<< MAXLEN <<" strings: " << endl;
	//给字符指针数组分配内存	
	for(int i = 0;i < MAXLEN;i++){
		C[i] = new char[MAX_ARRAY_LEN]; 
	}
	if(EXIT_SUCCESS == fill_array(C,MAXLEN)){
		show_array(C,MAXLEN);
		cout << "max length string is: " << "\"" <<maxn(C,MAXLEN) << "\""<< endl;
	}
	//释放字符指针数组分配的内存
	for(int i = 0;i < MAXLEN;i++){
		delete [] C[i]; 
		C[i] = NULL;
	}

	return EXIT_SUCCESS;
}
template <typename T>
T maxn(T Array[],const unsigned int Count)
{
	T max = Array[0];
	for(int i = 1;i < Count;i++){
		if(Array[i] > max){
			max = Array[i];
		}
	}
	return max;
}

template <> char * maxn<char *>(char * Array[],const unsigned int Count)
{
	unsigned int max_len;
	char * max_len_char = Array[0];

	max_len_char = Array[0];
	max_len = strlen(Array[0]);

	for(int i = 1;i < Count;i++)
	{	
		if(strlen(Array[i]) > max_len){
			max_len_char = Array[i];
			max_len = strlen(Array[i]);
		}
	}
	return max_len_char;
}

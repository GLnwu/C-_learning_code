/*************************************************************************
    > File Name: Chapter8_8_2.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Tue 04 Oct 2016 01:49:03 PM CST
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <cstring>
#define MAXLEN 128

typedef struct Candy_Bar{
	char CandyName[MAXLEN];
	double Weight;
	unsigned int Kilo;
}Candy;

//后三个参数填充结构体
int fill_candy(Candy &T,const char CandyName[MAXLEN] = "Millennium",const double Weight = 2.85,const int Kilo = 350);

int main(void)
{
	using namespace std;
	Candy T;
	fill_candy(T);
	return 0;
}

int fill_candy(Candy &T,const char CandyName[MAXLEN],const double Weight,const int Kilo)
{
	if(NULL == CandyName || 0 == strlen(CandyName)|| 0 > Weight || 0 > Kilo)
	{
		return EXIT_FAILURE;
	}

	strncpy(T.CandyName,CandyName,strlen(CandyName));
	int i = strlen(CandyName);
	while(i < MAXLEN)
	{
		T.CandyName[i++] = '\0';
	}

	T.Weight    = Weight;
	T.Kilo      = Kilo;
	return EXIT_SUCCESS;
}

/*************************************************************************
    > File Name: Chapter8_8_4.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Thu 13 Oct 2016 10:45:35 PM CST
 ************************************************************************/
#include <iostream>
#include <cstring>	//for stlen(),strcpy()
#include <cstdlib>
using namespace std;
struct stringy {
	char * str;	//print to a string
	int ct;		//length of string (not counting '\0')
};
bool set(stringy & strc, char str[]);
void show(const stringy & strc);
void show(const stringy & strc,const int times);
void show(const char * str);
void show(const char * str,const int times);

int main(void)
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany,testing);
	show(beany);
	show(beany,2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing,3);
	show("Done!");

	//释放给结构体成员分配的动态内存
	delete [] beany.str;
	beany.ct = 0;
	return EXIT_SUCCESS;
}

//将str内容复制到结构体的str成员，并计算str长度赋值给ct成员
bool set(stringy & strc, char str[])
{
	if(NULL == str){
		return EXIT_FAILURE;
	}
	strc.str = new char [strlen(str)+1];

	strcpy(strc.str,str);
	strc.str[strlen(str)] = '\0';

	strc.ct = strlen(str);
	
	return EXIT_SUCCESS;
}

//打印结体字符串内容
void show(const stringy & strc)
{
	if(NULL == strc.str){
		return;
	}
	cout << strc.str << endl;
}

//打印结构体字符串内容，times次
void show(const stringy & strc,const int times)
{
	if(NULL == strc.str){
		return;
	}
	for(int i = 0;i < times;i++){
		cout << strc.str;
	}	
	cout << endl;
}
//打印字符串
void show(const char * str)
{
	if(NULL == str){
		return;
	}
	cout << str << endl;
}
//打印字符串，times次
void show(const char * str,const int times)
{
	if(NULL == str){
		return;
	}
	for(int i = 0;i < times;i++){
		cout << str;
	}
	cout << endl;
}

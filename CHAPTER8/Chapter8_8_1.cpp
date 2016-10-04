#include <iostream>


//函数重载和函数默认值的使用
void print(const char * str);
//如果n的值不为0，则打印字符串次数为调用函数print的次数
void print(const char * str, int n);

int main(void)
{
	const char * str = "hello";

	print(str);
	print(str,2);
}

void print(const char * str)
{
	using namespace std;
	cout << str << endl;
}

void print(const char * str, int n)
{
	using namespace std;
	if(0 == n)
	{
		return;
	}
	cout << "n != 0" <<endl;
	cout << str << endl;
}

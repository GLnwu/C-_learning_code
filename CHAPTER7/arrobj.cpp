/*************************************************************************
    > File Name: arrobj.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Tue 30 Aug 2016 09:24:16 PM CST
 ************************************************************************/
#include <iostream>
#include <array>
#include <string>
//constant data
const int Seasons = 4;
const std::array<std::string,Seasons> Snames = 
{"Spring","Summmer","Fall","Winter"};

//function to modify array object
void fill(std::array<double,Seasons> *pa);
//function that uses array object without modifyingit
void show(std::array<double,Seasons> da);

int main(void)
{	
	std::array<double,Seasons> expenses;
	fill(&expenses);
	show(expenses);
	return 0;
}

void fill(std::array<double,Seasons> *pa){
	using namespace std;
	for (int i = 0;i < Seasons;i++){
		cout << "Enter " << Snames[i] << "expenses";
		cin >> (*pa)[i];
	}
}

void show(std::array<double , Seasons> da){
	using namespace std;
	double total = 0.0;

	cout << "\nEXPENSE\n";
	for (int i = 0;i < Seasons;i++){
		cout << "Enter " << da[i] << "expenses";
		total += da[i];	
	}
	cout << "Total Expense: $" << total << endl;
}


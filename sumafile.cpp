/*************************************************************************
    > File Name: sumafile.cpp
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Thu 09 Jun 2016 03:24:24 PM CST
 ************************************************************************/
#include <iostream>
#include <fstream>	//for I?O support
#include <cstdlib>	//support for exit()
const int SIZE = 60;
int main(void)
{
	using namespace std;
	char 		filename[SIZE];
	ifstream 	inFile;	//object for handling file input

	cout << "Enter name o data file:";
	cin.getline(filename,SIZE);
	inFile.open(filename);	//associate inFile with a file
	if(!inFile.is_open())	//failed to open file
	{
		cout << "cout not open the file " << filename <<endl;
		cout << "Porgram terminating.\n";
		exit(EXIT_FAILURE);
	}
	double 	value;
	double 	sum = 0.0;
	int 	count;		//number of items read

	inFile >> value;	//get first value
	while(inFile.good())	//while input good and not at EO
	{
		++count;		//ont more item read
		sum += value;		//calculate running total
		inFile >> value;	//get next value
	}
	if(inFile.eof())
	{
		cout << "End of file reached.\n";
	}	
	else if(inFile.fail())
	{
		cout << "Input terminated by data msimathch.\n";
	}
	else
	{
		cout << "Input terminated for unkown reason.\n";
	}
	if(count == 0)
	{
		cout << "No data processed.\n";
	}
	else
	{
		cout << "Item read: " << count << endl;
		cout << "Sum: " << sum <<endl;
		cout << "Average: "
	}
}

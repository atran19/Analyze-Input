////////////////
//Anna Tran
//CS 172 sec1
//11.1 Analyze input
////////////////

#include<iostream>
using namespace std;


int* arr(int size)
{
	int* printarray = new int[size];
		return printarray;
}
int main()
{
//Ask for array size
	cout << "Enter array size" << endl;
	int arsize;
	cin >> arsize;
	
	
//Store address of array size in new address
	int* ptr = arr(arsize);
	
//read numbers into array
	for (int i = 0; i < arsize; i++)
	{
		cout << "Enter numbers to put in array" << endl;
		
		cin >> ptr[i];
		
	}
	
//compute average
	

			int sum = 0;
			int average = 0;
			for (int i=0;i<arsize;i++)
			
			{
				sum += ptr[i];

			}
			average = sum / arsize;
			cout << "The average is " << endl;

	//Values above 0
			int count = 0;
			for (int i = 0; i < arsize; i++)
			{
				if (ptr[i] >= average)
					count++;
			}
			cout << "The amount of numbers above average is :  " << endl;
			delete[]ptr;
			return 0;
}
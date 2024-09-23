//Write a C++ program to find the second-largest integer in a list of integers.

#include<iostream>
using namespace std;
int main()
{
	int len;
	cout<<"Enter length of array : ";
	cin>>len;
	int array[len];
	int largest=array[0], second_largest=array[0];
	
	if(len<2) cout<<"Invalid Input!!";
	else
	{	
		for(int i=0; i<len; i++)
		{
			cout<<"Enter element "<<i+1<<" : ";
			cin>>array[i];
			if(array[i]>largest){
				second_largest = largest;
				largest = array[i];
			}
		}
//	cout<<"Here is your largest element : "<<largest;
	cout<<"Here is your second largest element : "<<second_largest;
	}
	
	return 0;
}


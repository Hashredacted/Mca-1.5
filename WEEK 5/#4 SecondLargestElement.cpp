//Write a C++ program to find the second-largest integer in a list of integers.

#include<iostream>
using namespace std;
int main()
{
	int len;
	cout<<"Enter length of array : ";
	cin>>len;
	int array[len];
	int largest=INT_MIN, second_largest=INT_MIN;
	
	if(len<2) cout<<"Invalid Input!!";
	else
	{	
		for(int i=0; i<len; i++)
		{
			cout<<"Enter element "<<i+1<<" : ";
			cin>>array[i];
			if(array[i]>largest){
				largest = array[i];
			}
			else if(array[i]<largest && array[i]>second_largest){
				second_largest = array[i];
			}
		}
//	cout<<"Here is your largest element : "<<largest;
	if (second_largest != INT_MIN){
	cout<<"Here is your second largest element : "<<second_largest;
	}
	else {
	cout<<"all elements are equal";
	}
	}
	
	return 0;
}

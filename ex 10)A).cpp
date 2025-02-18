//a)	Write a C++ Program to find Sum of Array elements using function template. (eg. Pass Integer, Float and Double array of 10 elements) 
#include<iostream>
using namespace std;
template<typename X> void addition(X arr[])
{
	X sum=0;
	for(int i=1;i<=10;i++)
	{
		sum += arr[i];
	}
	cout<<"The sum of the elements is: "<<sum<<endl;
}
int main()
{
	int arr[]={2,4,1,6,2,8,3,9,5,7,3};
	addition(arr);
	float arr1[]={1.3,4.2,5.5,6.2,7,3.8,4.3,4.8,1.9,3.3};
	addition(arr1);
	return 0;
	 
}

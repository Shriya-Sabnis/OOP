//b)	Write a program using function overloading to calculate the sum of 5 float values and sum of 10 integer values. 
#include<iostream>
using namespace std;
class random
{
	public:
		float arr[5];
		int arr1[10];
		
		void getdata_float()
		{
			cout<<"Enter the float values"<<"\n";
			for(int i=0;i<5;i++)
			{
				cout<<"Enter the number";
			    cin>>arr[i];
			}
		}
		
		void getdata_int()
		{
			cout<<"Enter the integer values"<<"\n";
			for(int i=0;i<10;i++)
			{
				cout<<"Enter the number";
			    cin>>arr1[i];
			}
		}
	    void sum(float arr[])
		{
			float sum=0;
			for(int i=0;i<5;i++)
			{
				sum = sum+ arr[i];
			}
			cout<<"the sum is"<<sum<<"\n";
		}
		 
		void sum(int arr1[])
		{
			int sum=0;
			for(int i=0;i<10;i++)
			{
				sum =sum+ arr1[i];
			}
			cout<<"the sum is"<<sum<<"\n";
		}
};

int main()
{
	random s1;
	s1.getdata_float();
	s1.getdata_int();
	s1.sum(s1.arr);
	s1.sum(s1.arr1);
	return 0;
}

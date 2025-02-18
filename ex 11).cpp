/*
11.	   Write a C++ program to implement generic vectors. Include following member functions: -To create the vector. 
a)	To modify the value of a given element 
b)	To multiply by a scalar value. 
c)	To display the vector in the form (10,20,30,…)
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> x;
	unsigned int i;
	x.resize(5);
	
	for(i=0;i<5;i++)
	{
		int val;
		cout<<"Enter the value:";
		cin>>val;
		x[i]=val;
	}
	
	for(i=0;i<5;i++)
	{
		int val;
		cout<<"Enter the value:";
		cin>>val;
		x.push_back(val);
	}
    for(i=0;i<10;i++)
	{
		cout<<x[i]<<" , ";
	}
	cout<<"\n";
	for(i=0;i<10;i++)
	{
		x[i]=x[i]+2;
		cout<<x[i]<<" , ";
	}
	cout<<"\n";
	for(i=0;i<10;i++)
	{
		x[i]=x[i]*2;
		cout<<x[i]<<" , ";
    }
    cout<<"\n";
	return 0;
}

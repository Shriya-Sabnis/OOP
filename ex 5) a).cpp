//a)	Write a program to find the sum of numbers between 1 to n using a constructor where the value of n will be passed to the constructor.
#include<iostream>
using namespace std;
class sample
{
	public:
		int a,sum=0;
		
		sample(int n)
		{
			a = n;
		}
		
		void add()
		{
			for(int i=1;i<a;i++)
			{
				sum += i;
			}
		}
		
		void display()
		{
			cout<<"The sum of the numers is " << sum;
		}
};

int main()
{
	cout<<"Enter the limit";
	int n;
	cin>>n;
	sample s1(n);
	s1.add();
	s1.display();
	return 0;
}

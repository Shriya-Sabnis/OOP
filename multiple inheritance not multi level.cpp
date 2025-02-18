//b)multiple inheritance
#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		
		void getdata()
		{
			cout<<"Enter the 1st number";
			cin>>a;
		}
};

class B 
{
	public:
		int b;
		
		void getdata1()
		{
			cout<<"Enter the 2nd number";
			cin>>b;
		}
};

class C : public A, public B
{
	public:
		int c;
		int sum;
		void getdata2()
		{
			getdata();
			getdata1();
			cout<<"Enter the 3rd number";
			cin>>c;
		}
		
		void calculate()
		{
			sum = a+b+c;
			cout<<"the sum of the three numbers is "<<sum;
		}
};

int main()
{
	C c1;
	c1.getdata2();
	c1.calculate();
	return 0;
}

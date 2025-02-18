//c)	Write a C++ Program to build Simple calculator using a Class template.
#include<iostream>
using namespace std;
template<typename X>class calculator
{
	private:
		X a;
		X b;
	public:
		calculator(X n, X m)
		{
			a=n;
			b=m;
		}
		void display()
		{
			cout<<"The addition is:"<<a+b<<endl;
			cout<<"The subtraction is:"<<a-b<<endl;
			cout<<"The multiplication is:"<<a*b<<endl;
			cout<<"The divison is:"<<a/b<<endl;
		}
};
int main()
{
	calculator<int> c1(5,2);
	calculator<float> c2(5.6,2.3);
	c1.display();
	c2.display();
	return 0;
}

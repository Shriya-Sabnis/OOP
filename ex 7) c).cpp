//c)	 Write a program to implement Unary - operator when used with the object so that the numeric data member of the class is negated.

#include<iostream>
using namespace std;

class sample
{
	public:
		int x;
		int y;
		int z;
		void getdata(int a, int b, int c);
		void putdata();
		void operator-();
};

void sample::getdata(int a, int b, int c)
{
	this->x=a;
	this->y=b;
	this->z=c;
}
void sample::putdata()
{
	cout<<"X:"<<this->x<<"\n";
	cout<<"Y:"<<this->y<<"\n";
	cout<<"Z:"<<this->z<<"\n";
}

void sample::operator-()
{
	this->x=-x;
	this->y=-y;
	this->z=-z;
}

int main()
{
	sample s1;
	s1.getdata(5,10,15);
	s1.putdata();
	-s1;
	s1.putdata();
	return 0;
}

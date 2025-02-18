//a)	Write a program using function overloading to calculate the area of a laboratory (which is rectangular in shape) and area of Classroom (which is square in shape).
#include<iostream>
using namespace std;
class random
{
	public:
		int l,b,a;
		
		void getdata_rect()
		{
			cout<<"Enter the length";
			cin>>l;
			cout<<"Enter the breadth";
			cin>>b;
		}
		
		void getdata_square()
		{
			cout<<"Enter the length of the side";
			cin>>a;
		}
		
	    void area(int l, int b)
		{
			int area = l*b;
	        cout<<"The area is"<<area<<"\n";
		}
		 
		void area(int a)
		{
			int area = a*a;
			cout<<"The area is"<<area<<"\n";
		}
};

int main()
{
	random s1;
	s1.getdata_rect();
	s1.area(s1.l,s1.b);
	s1.getdata_square();
	s1.area(s1.a);
	return 0;
}

//c)Write a program to implement hierarchical inheritance
#include<iostream>
using namespace std;
class rectangle
{
	public:
		int length;
		int breadth;
		
		void getdata()
		{
			cout<<"Enter the length";
			cin>>length;
			cout<<"Enter the breadth";
			cin>>breadth;
		}
		
};

class area : public rectangle
{
	public:
		int areaa;
		
		void display_area()
		{
			getdata();
			areaa = length*breadth;
			cout<<"The area of the rectangle is "<<areaa<<"\n";
		}
};

class perimeter : public rectangle
{
	public:
		int perimeterr;
		
		void display_perimeter()
		{
			getdata();
			perimeterr =  2*(length+breadth);
			cout<<"The perimeter of the rectangle is"<<perimeterr;
		}
};

int main()
{
	area a1;
	a1.display_area();
	
	perimeter p1;
	p1.display_perimeter();
	return 0;
}

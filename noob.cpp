//d)d)	 Write a program to implement hybrid inheritance
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
		
		void calculate_area()
		{
			getdata();
			areaa = length*breadth;
		}
};

class perimeter : public rectangle
{
	public:
		int perimeterr;
		
		void calculate_perimeter()
		{
			getdata();
			perimeterr =  2*(length+breadth);
		}
};

class display : public area,public perimeter
{
	public:
	void displayy()
	{
		calculate_area();
		calculate_perimeter();
		cout<<"The area of the rectangle is "<< areaa<<"\nThe perimeter of the rectangle is "<<perimeterr;
	}
};
int main()
{
	display d1;
	d1.displayy();
	return 0;
}

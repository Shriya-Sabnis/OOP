//e) virtual base class
#include <iostream>
using namespace std;
class rect
{
	public:
		int length;
		int breadth;
		
		void input1()
		{
			cout<<"enter length";
			cin>>length;
			cout<<"enter breadth:";
			cin>>breadth;
			
		}
		
};
class areas : public virtual rect
{
	public:
		int area;
	
		void input2()
		{
			input1();
			area=length*breadth;
			
		 } 
};
class peris: public virtual rect
{
	public:
		int peri;
		
	void input3()
	{
		input1();
		peri= 2*(length+breadth);
	
	}
	
};
class display : public areas,public peris
{
	public:
		void display_data()
		{
		    input 2();
		    input 3();
			cout<<"area is "<<area<<endl;
			cout<<"perimeter is "<<peri;
		}
};

int main()
{


display d1;
d1.display_data();
return 0;
	
	
}

//c)	  WAP for swapping contents of two variables of same class using friend function
#include<iostream>
using namespace std;

class Student
{
	private:
		int x;
		int y;
		
	public:
		void in()
		{
			cout<<"Enter frist number";
			cin>>x;
			cout<<"Enter the second number";
			cin>>y;
		}
		void out()
		{
			cout<<"X:"<<x<<"\n"<<"Y:"<<y;
		}
		friend void swap(Student &obj);	
};

void swap(Student &obj)
{
	int temp=obj.x;
	obj.x=obj.y;
	obj.y=temp;
}


int main()
{
	Student s1;
	s1.in();
	s1.out();
	swap(s1);
	s1.out();
	return 0;
}

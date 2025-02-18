#include<iostream>
using namespace std;

class Student
{
	private:
		int x,y;
		
	public:
		void out(int x=3,int y=23)
		{
			cout<<"X : "<<x<<"\n"<<"Y : "<<y<<"\n";
		}
};




int main()
{
	Student s1;
	Student s2;
	Student s3;
	int x,y;
	cout<<"Enter the value of x and y";
	cin>>x>>y;
	cout<<"Pass by constant value\n";
	s1.out(33,55);
	cout<<"Pass variables \n";
	s2.out(x,y);
	cout<<"Pass by default parameter\n";
	s3.out();
	return 0;
}

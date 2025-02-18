#include<iostream>
using namespace std;

class Student
{
	public:
		int x;
		int y;

		Student()
		{
			x=0;
			y=0;
		}
		void out()
		{
			cout<<"X : "<<x<<"\n"<<"Y : "<<y<<"\n";
		}
};
void pass_by_value(Student obj)
{
	obj.x=20;
	obj.y=67;
}
void pass_by_reference(Student &obj)
{
	obj.x=20;
	obj.y=67;
}


int main()
{
	Student obj;
    cout<<"Original";
    obj.out();
    cout<<"Pass by value";
    pass_by_value(obj);
    obj.out();
    cout<<"Pass by refernce";
    pass_by_reference(obj);
    obj.out();
	return 0;
}

#include<iostream>
using namespace std;

class Student
{
	private:
		int roll;
		string name;
		
	public:
		void in();
		void out();
};

void Student::in() 
{
	cout<<"Enter the name";
	getline(cin,this->name);
	cout<<"Enter the roll no";
	cin>>this->roll;
}

void Student::out()
{
	cout<<"Name: "<<name<<"\n"<<"Rpll No: "<<roll;
}

int main()
{
	Student s1;
	Student* prt=new Student;
	Student * prt2 = &prt;
	prt->in();
	prt->out();
	prt2->out();
	delete prt;
	return 0;
}

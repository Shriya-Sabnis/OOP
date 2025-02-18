//a)Write a program to implement multilevel inheritance
#include<iostream>
using namespace std;
class person
{
	public:
		int age;
		string gender;
		string name;
		
		void getdata()
		{
			cout<<"Enter the gender number: ";
			cin>>gender;
			cout<<"Enter the name: ";
			cin>>name;
			cout<<"Enter the age: ";
			cin>>age;
		}
};

class emp : public person
{
	public:
		int emp_id;
		string company;
		float salary;
		
		void getdata1()
		{
			cout<<"Enter the company name number: ";
			cin>>company;
			cout<<"Enter the salary of  the employee";
			cin>>salary;
			cout<<"Enter the emp_ID";
			cin>>emp_id;
		}
};

class prog : public emp
{
	public:
		string prog_lang_known;
		void getdata2()
		{
			getdata();
			getdata1();
			cout<<"Enter the programm languages known number";
			cin>>prog_lang_known;
		}
		
		void display()
		{
		     cout<<"name"<<name<<"\nGender "<<gender<<"\Age "<<age<<"\nEmp_id "<<emp_id;
			 cout<<"\nCompany Name "<<company<<"\nSalary "<<salary<<"\nProgramming languages known"<<prog_lang_known;   
		}
};

int main()
{
	prog c1;
	c1.getdata2();
	c1.display();
	return 0;
}

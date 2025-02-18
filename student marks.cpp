//c)	Write a program (WAP) to declare class 'student' having data members as roll_no, name, unittest1marks and unittest2marks. Accept and display data for one object, calculate total marks and display all data.
#include<iostream>
using namespace std;
class Student
{
	public:
		int roll_no;
		int unit_test_1;
		int unit_test_2;
		int total;
		string name;
		
		void getdata()
		{
			cout<<"Enter the name of the student";
			getline(cin, name);
			cout<<"Enter the Roll NO of the student";
			cin>>roll_no;
			cout<<"enter the marks of the first unit test of the student";
			cin>>unit_test_1;
			cout<<"enter the marks of the second unit test of the student";
			cin>>unit_test_2;
		}
		void calc()
		{
		  total = unit_test_1+unit_test_2;	
		}
		
		void displaydata()
		{
			cout<<"The name of the student:"<<name<<"\n The roll number the the student is: "<<roll_no<<"\nThe total marks of the student are: "<<total;
			
		}
}S1;
	
	int main()
	{
		S1.getdata();
		S1.calc();
		S1.displaydata();
		return 0;
	}
	


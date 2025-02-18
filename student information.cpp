//a)	Write a program (WAP) to declare class 'student' having data members as roll_no and name and class. Accept and display data for one object.
#include<iostream>
using namespace std;
class Student
{
	public:
		int roll_no;

		string name;
		
		void getdata()
		{
			cout<<"Enter the name of the student";
			getline(cin, name);
			cout<<"Enter the Roll NO of the student";
			cin>>roll_no;
			cout<<"enter the class of the student";
			cin>>class_student;
		}
		
		void displaydata()
		{
			cout<<"The name of the student:"<<name<<"\n The roll number the the student is: "<<roll_no<<"\nThe class of the student is: "<<class_student;
			
		}
}S1;
	
	int main()
	{
		S1.getdata();
		S1.displaydata();
		return 0;
	}
	


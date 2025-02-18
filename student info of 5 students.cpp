//1. WAP to declare class Student with data members rollno and name. Accept n display this data for 5 students (5 objects , using array of objects)
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
			cin.ignore();
		}
		
		void displaydata()
		{
			cout<<"The name of the student:"<<name<<"\n The roll number the the student is: "<<roll_no<<"\n";
			
		}
};
	
	int main()
	{
		Student info[5];
		cout<<"Enter the information of the students\n";
		for (int i=0;i<5;i++)
		{
			info[i].getdata();
		}
		cout<<"The information oif the students is\n";
		for (int i=0;i<5;i++)
		{
			info[i].displaydata();
		}
		return 0;
	}

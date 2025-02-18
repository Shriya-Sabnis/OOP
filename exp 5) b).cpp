//b Write a program to declare a class "student" having data members as name and percentage. Write a constructor to initialize these data members. Accept and display data for one student.
#include<iostream>
#include<string>
using namespace std;
class student
{
	private:
		string name;
		float percentage;
		
	public:
		student()
		{
			name ="Shriya";
			percentage = 98.99;
		}
		
		void getdata()
		{
			cout<<"Enter the name";
			getline(cin,name);
			cout<<"Enter the percentage";
			cin>>percentage;
			cin.ignore();
		}
		
		void display()
		{
			cout<<"Name: "<<name<<"\n Percentage: "<<percentage;
		}
};

int main()
{
	student s1;
	s1.display();
	s1.getdata();
	s1.display();
	return 0;
}

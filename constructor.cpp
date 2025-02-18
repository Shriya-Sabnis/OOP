#include<iostream>
using namespace std;
	
class student
{
	private:
		int roll;
		string name;
		
	public:
		student()
		{
			roll=3;
			name = "Shriya Sabnis";
		}
		student(int n,string name1="Shravya Sabnis")
		{
			roll=n;
			name=name1;
		}
		
		student(student &s1)
		{
			roll=s1.roll;
			name=s1.name;
		}
		void out()
		{
			cout<<"Name: "<<name<<"\n"<<"Rpll No: "<<roll<<"\n";
		}
};

int main()
{
	student s1;
	student s2(23,"Shital");
	student s3(22);
	student s4(s2);
	cout<<"Default\n";
	s1.out();
	cout<<"Para\n";
	s2.out();
	cout<<"Default value\n";
	s3.out();
	cout<<"Copy\n";
	s4.out();
	return 0;
}

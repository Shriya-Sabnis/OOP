//d)	Write a program to declare class "time", accept time in HH:MM:SS format, convert it into total seconds and display them.
#include<iostream>
#include<string>
using namespace std;
class Time
{
	public:
		int hours;
		int minutes;
		int seconds;
		char c1,c2;
		int total_seconds;
		
		void getdata()
		{
			cout<<"Enter the time in HH:MM:SS format";
			cin>>hours>>c1>>minutes>>c2>>seconds;
		}
		
		int calc()
		{
			if(c1==':'&&c2==':')
			{
				total_seconds=hours*3600+minutes*60+seconds;
				return total_seconds;
			}
			else 
			return 0;
		}
		
		void display_data(int a)
		{
			if(a>0)
			cout<<"The total number of seconds is: "<<a;
			else
			cout<<"Invalid Input";
		}
}T1;

int main()
{
	T1.getdata();
	int a = T1.calc();
	T1.display_data(a);
	return 0;
	
}


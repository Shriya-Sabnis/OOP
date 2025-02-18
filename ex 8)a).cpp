//a)	Write a program to overload the '+' operator so that two strings can be concatenated. Eg:"xyz"+"pqr" then output will "xyzpqr". 
#include<iostream>
using namespace std;

class sample
{
	public :
		string str1;
		
		void getdata()
		{
			cout<<"Enter name";
			cin>>str1;
		}
		
		void operator +(sample s2)
		{
			str1=str1+s2.str1;
		}
		
		void putdata()
		{
			cout<<"The concatinated string is "<<str1;
		}
};

int main()
{
	sample s1;
	sample s2;
	s1.getdata();
	s2.getdata();
	s1+s2;
	s1.putdata();
	return 0;
}

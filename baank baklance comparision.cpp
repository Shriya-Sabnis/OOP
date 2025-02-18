//f)	WAP to declare a class 'Bank', having data members as customer-name, bank_acc and acc_balance. Accept this data and display it for two customers and display customer details having less account balanc
#include<iostream>
#include<string>
using namespace std;
class Bank
{
	public:
		int acc_no;
		int acc_balance;
		string name;
		
		void getdata()
		{
			cout<<"Enter your name: ";
			getline(cin, name);
			cout<<"Enter your caaount number: ";
			cin>>acc_no;
			cout<<"enter youraccount balance:  ";
			cin>>acc_balance;
			cin.ignore();
		}
			float compare(float a, float b)
		{
			if(a<b)
			return a;
			else 
			return b;
		}
		
		void display_data()
		{
			cout<<"The person having less bank balance is: "<<name;
		}
};

int main()
{
	Bank B1;
	Bank B2;
	B1.getdata();
	B2.getdata();
	float f =B1.compare(B1.acc_balance,B2.acc_balance);
	if(f==B1.acc_balance)
	B1.display_data();
	else 
	B2.display_data();
	return 0;
}

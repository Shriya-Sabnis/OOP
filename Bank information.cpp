//b)	WAP to declare a class 'Bank', having data members as customer-name, bank_acc and acc_balance. Accept this data and display it for two objects. 
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
			cout<<"Enteryour name: ";
			getline(cin, name);
			cout<<"Enter your caaount number: ";
			cin>>acc_no;
			cout<<"enter youraccount balance:  ";
			cin>>acc_balance;
		}
		
		void displaydata()
		{
			cout<<"Name:"<<name<<"\n Account Number: "<<acc_no<<"\n Bank Balance: "<<acc_balance;
			
		}
};
	
	int main()
	{
		Bank B1;
		Bank B2;
		B1.getdata();
	    B1.displaydata();
	    B2.getdata();
	    B2.displaydata();
		return 0;
	}
	


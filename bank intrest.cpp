//b)	WAP to declare a class 'Account' having data members as Account no. and balance .Accept this data for 10 accounts and give interest of 10% where balance is equal or greater than 5000 and display them.
#include<iostream>
using namespace std;
int intrest=0;
class bank 
{
	public:
		int acc_balance,acc_no;
		
		void getdata()
		{
			cout<<"Enter the Account number: ";
			cin>>acc_no;
			cout<<"Enter the account balance: ";
			cin>>acc_balance;
		}
		
		void calc()
        {
				if(acc_balance>=5000)
				{
					intrest=(acc_balance*10*1)/100;
					acc_balance=acc_balance+intrest;
				    displaydata();
				}
		}
		
		void displaydata()
		{
			cout<<"Account Number: "<<acc_no<<"\nAccount Balance: "<<acc_balance<<"\nThe intrest added to your balance is: "<<intrest<<"\nAccount Balance with interst: "<<acc_balance<<"\n\n";
		}
};

int main()
{
	bank info[10];
	for(int i=0;i<10;i++)
	{
		info[i].getdata();
	}
	for(int i=0;i<10;i++)
	{
		info[i].calc();
	}
	cout<<"For all those bank accounts who were not mentioned above, there was no intrest added to their balance";
	return 0;
	
}

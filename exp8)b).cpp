//b)Write a program to create a base class ILogin having data members name and password. Declare accept() function virtual. Derive EmailLogin and MmebershipLogin classes from ILogin. Display Email login details and membership login details of the employee

#include<iostream>
using namespace std;

class ilogin
{
	public:
		string name;
		string password;
		
		virtual void accept()
		{
			cout<<"Enter the name";
			cin>>name;
			cout<<"Enter the password";
			cin>>password;
		}
		
		virtual void display()
		{
			cout<<"name:"<<name<<"\n";
			cout<<"Password:"<<password<<"\n";
		}
};

class EmailLogin : public ilogin
{
	public:
		string email;
		
		void accept()override
		{
			cout<<"Enter the name";
			cin>>name;
			cout<<"Enter the password";
			cin>>password;
			cout<<"Enter the email";
			cin>>email;
		}
		
		void display()override
		{
			cout<<"name:"<<name<<"\n";
			cout<<"Password:"<<password<<"\n";
			cout<<"Email"<<email<<"\n";
		}
};

class MmebershipLogin: public ilogin
{
	public:
		string email;
		
		void accept()override
		{
			cout<<"Enter the name";
			cin>>name;
			cout<<"Enter the password";
			cin>>password;
			cout<<"Enter the email";
			cin>>email;
		}
		
		void display()override
		{
			cout<<"name:"<<name<<"\n";
			cout<<"Password:"<<password<<"\n";
			cout<<"Email"<<email<<"\n";
		}
};

int main()
{
	ilogin i1;
	ilogin *ptr = &i1;
	ptr->accept();
	ptr->display();
	EmailLogin e1;
	ptr=&e1;
	ptr->accept();
	ptr->display();
	MmebershipLogin m1;
	ptr=&m1;
	ptr->accept();
	ptr->display();
}

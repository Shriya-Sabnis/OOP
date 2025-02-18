//4)	WAP to declare a class 'Staff' having data members as name and post. Accept this data for 5 staff and display names of staff who are "HOD".

#include<iostream>
#include<string>
using namespace std;

class staff
{
	public:
		string name;
		string post;
		
		void getdata()
		{
			cout<<"Enter the name: ";
            getline(cin,name);
			cout<<"Enter the post: ";
			getline(cin,post);
		}
		
		void calc()
        {
				if(post.compare("H.O.D")==0)
				{
				    displaydata();
				}
		}
		
		void displaydata()
		{
			cout<<"Name: "<<name<<"\nPost "<<post<<"\n\n";
		}
};

int main()
{
	staff info[5];
	for(int i=0;i<5;i++)
	{
		info[i].getdata();
	}
	for(int i=0;i<5;i++)
	{
		info[i].calc();
	}
	cout<<"For all those names who were not mentioned above, they are not HOD's of any department'";
	return 0;
	
}

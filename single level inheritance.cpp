#include<iostream>
using namespace std;

class furniture
{
	public:
		string material;
		int price;
		
		void getdata()
		{
			cout<<"Enter the material of the table";
			cin>>material;
			cout<<"ENTER THE PRICE";
			cin>>price;
		}
};

class Table : public furniture
{
	public:
		float height;
		float area;
		
		void getdata1()
		{
			getdata();
			cout<<"Enter the height of the table";
			cin>>height;
			cout<<"Enter the area";
			cin>>area;
		}
		
		void display()
		{
			cout<<"The material is "<<material<<"\nThe price is "<<price<<"\nThe height is "<<height<<"\nThe area is "<<area;
		}
};

int main()
{
	Table t1;
	t1.getdata1();
	t1.display();
	return 0;
}

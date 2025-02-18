//e)	WAP declare class 'Book' having data members as book_name, price and no. of pages. Accept this data for 2 objects and display the name of book havinggreater price.
#include<iostream>
#include<string>
using namespace std;
class Book
{
	public:
		float price;
		int no_of_pages;
		string book_name;
		
		void getdata()
		{
			cout<<"Enter the book name";
			getline(cin,book_name);
			cout<<"Enter the price of the book";
			cin>>price;
			cout<<"Enter the number of pages of the book";
			cin>>no_of_pages;
			cin.ignore();
		}
		
		float compare(float a, float b)
		{
			if(a>b)
			return a;
			else 
			return b;
		}
		
		void display_data(string a)
		{
			cout<<"The book with the greatest price is: "<<a;
		}
};

int main()
{
	Book B1;
	Book B2;
	B1.getdata();
	B2.getdata();
	float f =B1.compare(B1.price,B2.price);
	if(f==B1.price)
	B1.display_data(B1.book_name);
	else 
	B2.display_data(B2.book_name);
	return 0;
}

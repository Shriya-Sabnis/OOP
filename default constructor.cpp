//q3 Define a class ‘College’ members variables as roll_no, name, course. WAP using
//constructor with default value as “Computer Engineering” for course. Accept this data
//for two objects of class and display the data
#include <iostream>
#include<string>
using namespace std;
class college{
	private :
		int roll;
		string name;
		string course;
		
	public: 
	       college(int a,string name1,string course1="computer engeering :)")
	       {
	       	roll=a;
	       	name=name1;
	       	course=course1;
		   }
		   
		   void display(){
		   	cout<<"roll:"<<roll;
		   	cout<<"\n";
		   	cout<<"name:"<<name;
		   	cout<<"\n";
		   	cout<<"Course"<<course;
		   	cout<<"\n";
		}
		
		
};
int main (){
	
	college c1(50,"ansh");
	college c2(53,"anu","AISS");
    c1.display();
    c2.display();
	return 0;
}

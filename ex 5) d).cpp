//q-4 construction overloading

#include<iostream> 
 using namespace std;
 class student{
 	private: 
 	        string name;
 	        float percentage;
 	        string course;
 	public:
 		student(){
 			name="anu";
 			percentage=20.45;
 			course = "AIDS";
		 }
		 
		 
 		student(string name1,float percentage1,string course1="aids")
 		{
 		     name=name1;
 		     percentage=percentage1;
 		     course=course1;
		 }
		 
			
		 void display(){
		 	cout<<"name:"<<name<<"\n";
		 	//cout<<"\n";
		 	cout<<"percentage:"<<percentage<<"\n";
		 	
		 	cout<<"course:"<<course;
		 }
 };
 int main(){
    student s1("ansh",70.3,"aiml");
 	student s2("ANU",30.3);
 	student s3;
 	s1.display();
 	cout<<"\n\n\n";
 	s2.display();
 	cout<<"\n\n\n";
 	s3.display();
 	return 0;
 }

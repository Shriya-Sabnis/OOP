//b)	Write a C++ Program to Count Digits and Spaces using File Handling.

#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

int main()
{
	fstream io;
	io.open("hi.txt",ios::in);
	int word_count=0;
    string line;
    string search="Hello";
    while(getline(io,line))
    {
    	istringstream stream(line);
    	string word;
    	while(stream>>word)
    	{
    		if(word==search)
    		word_count++;
		}
    	
	}
	io.close();
	cout<<"THe number of occrances of th words Hello are "<<word_count;
}

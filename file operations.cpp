#include <fstream>
#include <iostream>
#include <string>
#include<sstream>
using namespace std;

int main() {
    fstream io;

    
    io.open("hi.txt", ios::in);
    if (!io.is_open()) {
        cout << "Error: Unable to open hi.txt for reading.\n";
        return -1;
    }

    string content, line;
    int word_count=0;
    
    while (getline(io, line)) {
        istringstream stream(line);
        string word;
        while(stream>>word)
        {
        	if(word=="hello")
        	word_count++;
		}
        
    }
    io.close();
    cout<<"word count"<<word_count;
    io.close();

    

    return 0;
}


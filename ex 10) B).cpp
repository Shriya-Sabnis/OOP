//b)	Write a C++ Program of Square Function using template specialization  
//calculate the square of integer no. and a string. (Square of string is nothing but    Concatenation of a string with itself). 
//Write a specialized function for the square of a string.

#include <iostream> 
#include <string> 
 
using namespace std; 
 
template <typename T> T square(T value) 
{ 
    return value * value; 
} 
 
template <> string square<string>(string value) 
{ 
    return value + value; 
} 
 
int main() 
{ 
    int intValue = 5; 
    string strValue = "Hello"; 
 
    cout << "Square of " << intValue << " is: " << square(intValue) << endl; 
    cout << "Square of '" << strValue << "' is: \"" << square(strValue) << "\"" << 
endl; 
 
    return 0; 
} 
 


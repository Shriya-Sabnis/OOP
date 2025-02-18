//d)	 Write a program to implement the Unary ++ operator (for pre increment and post Increment) when used with the object so that the numeric data member of the class is Incremented.
#include <iostream> 
 
using namespace std; 
 
class A 
{ 
private: 
    int x; 
 
public: 
    void in() 
    { 
        cout << "Enter x: "; 
        cin >> x; 
    } 
    void out() 
    { 
        cout << "X: " << x << endl; 
    } 
    void operator++() 
    { 
        ++x; 
    } 
    A operator++(int) 
    { 
        A temp = *this; 
        x++; 
        return temp; 
    } 
}; 
 
int main() 
{ 
    A obj1, obj2; 
 
    obj1.in(); 
    ++obj1; 
    cout << "Pre increment: " << endl; 
    obj1.out(); 
 
    obj2 = obj1++; 
    cout << "Value returned to obj2 post increment: " << endl; 
    obj2.out(); 
 
    cout << "Value of obj1 post increment: " << endl; 
    obj1.out(); 
} 
 


/* 

Copy constructor in C++ 
============================

One Object Member Variable Values assigned to Another Object Member 
Variables  is called copy constructor. 

Syntax
===========
class class-name
{
    Access Specifier:
        Member-Variables
        Member-Functions
    public:
        class-name(variable)
        {
            // Constructor code 
        }
        
        ... other Variables & Functions
}


Syntax : Argument In Main Function
ClassName Object1(value);
ClassName Object2=Object1;

*/



#include<iostream>

using namespace std;

class Example        {
    int a,b;
    public:

    Example(int x,int y)
	{
    	a=x;
    	b=y;
    	cout<<"\nIm Constructor"<<endl;
    }

    void Display()    
	{
    	cout<<"\nValues :"<<a<<"\t"<<b<<endl;
    }
};

int main()                {
    Example Object(10,20);
    //Copy Constructor
    Example Object2=Object;
    // Constructor invoked.
    Object.Display();
    Object2.Display();
    return 0;
}

/*
Sample Output
Im Constructor
Values :10      20
Values :10      20

*/



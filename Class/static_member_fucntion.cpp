/*
what if our static member variables are private? Consider 
the following example:

class Something
{
private:
    static int s_nValue;
};
 
int Something::s_nValue = 1; // initializer
 
int main()
{
    // how do we access Something::s_nValue?
}


In this case, we can’t access Something::s_nValue directly from 
main(), because it is private. Normally we access private members 
through public member functions. While we could create a normal 
public member function to access s_nValue, we’d then need to 
instantiate an object of the class type to use the function! 
We can do better. In this case, the answer to the problem is 
that we can also make member functions static.



Because static member functions are not attached to a particular object, they can be called directly by using the class name and the scope operator. Like static member variables, they can also be called through objects of the class type, though this is not recommended.

Static member functions have two interesting quirks worth noting. First, because static member functions are not attached to an object, they have no this pointer! This makes sense when you think about it — the this pointer always points to the object that the member function is working on. Static member functions do not work on an object, so the this pointer is not needed.

Second, static member functions can only access static member variables. They can not access non-static member variables. This is because non-static member variables must belong to a class object, and static member functions have no class object to work with!
*/

#include<iostream>
using namespace std;

class Something
{
    private:
        static int s_nValue;
    public:
        static int GetValue() { return s_nValue; }
};
 
int Something::s_nValue = 1; // initializer
 
int main()
{
    std::cout << Something::GetValue() << std::endl;
}


/* 

Static variables in C++:
1. It is initialized to zero when its first object of its class is 
created. No other initialization is permitted.
2. Only one copy of that member is created for the entire calss 
and is shared by all the objects of that class, No matter how many 
objects are created. 
3. It is visible ony within the class, but its life time is in
entire program.


It will be ok to say Static variables are belongs to class itself 
and to the objects. So we can access the static variables from the 
class name by  using scope resolution operator 

Why use static variables inside classes? One great example is 
to assign a unique ID to every instance of the class. Here’s 
an example of that:

*/

#include<iostream>
using namespace std;

class Something
{
    public:
        static int s_nValue;
};
 
int Something::s_nValue = 1; // Must be initialized like this 
 
int main()
{
    Something cFirst;
    cFirst.s_nValue = 2;
 
    Something cSecond;
    std::cout << cSecond.s_nValue << endl ;
    std::cout << Something::s_nValue << endl ;
 
    return 0;
}

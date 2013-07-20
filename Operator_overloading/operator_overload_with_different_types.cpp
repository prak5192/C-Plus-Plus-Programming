/*
Overloading operators for operands of different types
======================================================

Often it is the case that you want your overloaded operators to work 
with operands that are different types. For example, if we have Cents(4), 
we may want to add the integer 6 to this to produce the result Cents(10).

When C++ evaluates the expression x + y, x becomes the first parameter, 
and y becomes the second parameter. When x and y have the same type, 
it does not matter if you add x + y or y + x — either way, the same 
version of operator+ gets called. However, when the operands have 
different types, x + y is not the same as y + x.

For example, Cents(4) + 6 would call operator+(Cents, int), and 6 + 
Cents(4) would call operator+(int, Cents). Consequently, whenever we 
overload binary operators for operands of different types, we actually 
need to write two functions — one for each case. Here is an example of that:

*/

#include<iostream>

using namespace std;

class Cents
{
    private:
        int m_nCents;
 
    public:
        Cents(int nCents) { m_nCents = nCents; }
 
        // Overload cCents + int
        friend Cents operator+(const Cents &cCents, int nCents);
     
        // Overload int + cCents
        friend Cents operator+(int nCents, const Cents &cCents);
     
        int GetCents() { return m_nCents; }
};
 
// note: this function is not a member function!
Cents operator+(const Cents &cCents, int nCents)
{
    return Cents(cCents.m_nCents + nCents);
}
 
// note: this function is not a member function!
Cents operator+(int nCents, const Cents &cCents)
{
    return Cents(cCents.m_nCents + nCents);
}
 
int main()
{
    Cents c1 = Cents(4) + 6;
    Cents c2 = 6 + Cents(4);
    std::cout << "I have " << c1.GetCents() << " cents." << std::endl;
    std::cout << "I have " << c2.GetCents() << " cents." << std::endl;
 
    return 0;
}



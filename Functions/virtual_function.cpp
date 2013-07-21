/*
A virtual function is a member function that is declared within 
a base class and redefined by a derived class. To create virtual 
function, precede the function’s declaration in the base class 
with the keyword virtual. When a class containing virtual function 
is inherited, the derived class redefines the virtual function to 
suit its own needs.

Base class pointer can point to derived class object. In this case, 
using base class pointer if we call some function which is in both 
classes, then base class function is invoked. But if we want to 
invoke derived class function using base class pointer, it can be 
achieved by defining the function as virtual in base class, this 
is how virtual functions support runtime polymorphism.



Virtual function is the member function of a class that can be 
overriden in its derived class. It is declared with virtual keyword. 
Virtual function call is resolved at run-time (dynamic binding) 
whereas the non-virtual member functions are resolved at compile 
time (static binding). 

*/

#include<iostream>

using namespace std;

class A
{
    private:
        int a; 
    public:
        A() {
            cout << "Contructor: Base" << endl;
            a = 1;
        }
       // virtual void show(){
        void show(){
            cout <<"Base : " << a<<endl;
        }
};

class B: public A
{
    private:
        int b;
    public: 
         B(){
            cout << "Contructor: Derived" << endl;
            b = 2; 
         }
        // virtual void show(){ 
         void show(){ 
            cout << "Derived : " << b<<endl;
         }
};

int main()
{
     A *ptr_A; 
     B objB;
     ptr_A = &objB;
     ptr_A->show(); 
     return 0;
} 


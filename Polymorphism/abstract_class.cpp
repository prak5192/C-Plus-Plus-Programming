/*
An abstract class is a class that is designed to be specifically 
used as a base class. An abstract class contains at least one pure 
virtual function. You declare a pure virtual function by using a 
pure specifier (= 0) in the declaration of a virtual member function 
in the class declaration.

The following is an example of an abstract class:

class AB {
public:
  virtual void f() = 0;
};

Function AB::f is a pure virtual function. A function declaration 
cannot have both a pure specifier and a definition. For example, 
the compiler will not allow the following:

struct A {
    virtual void g() { } = 0;
};

You cannot use an abstract class as a parameter type, a function return type, or the type of an explicit conversion, nor can you declare an object of an abstract class. You can, however, declare pointers and references to an abstract class. The following example demonstrates this:

*/

#include<iostream>
using namespace std;
struct A {
  virtual void f() = 0;
};

struct B : A {
  virtual void f() { }
};

// Error:
// Class A is an abstract class
// A g();

// Error:
// Class A is an abstract class
// void h(A);

// Success:  A is a reference of the struct A
A& i(A&);

int main() {

// Error:
// Class A is an abstract class
//   A a;

// Success: pa is the pointer of the A
   A* pa;
   B b;

// Error:
// Class A is an abstract class
//   static_cast<A>(b);
}



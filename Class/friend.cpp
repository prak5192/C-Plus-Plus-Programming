/* 
  Showing the example of friend function 
*/

#include <iostream>
using namespace std;

class X;

class Y { 
   public:
    void print(X& x); 
};

class X {   
    int a, b;
    friend void Y::print(X& x); 
    public:
        X() : a(1), b(2) { } 
};

void Y::print(X& x) {
    cout << "a is " << x.a << endl;
    cout << "b is " << x.b << endl;
}

int main() {
    X xobj;
    Y yobj;
    yobj.print(xobj);
}

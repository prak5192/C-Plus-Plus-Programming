/*
  Showing the usage of syntax of class and objects in C++
*/

#include<iostream>
#include<cstdio>

using namespace std;

class A{

    public:
        int a;
        void add ( int c, int b){ 
            a = c + b;
            cout << "Value of the sum of A and B :" <<  a << "\n"; 
            cout << sub(c,b) << "\n";  // Protected functions can be called 
                                       // from public section of the same class
            cout << mul(c,b ) << "\n";
        }   
    protected:
        int b;  
        int  sub ( int c, int b){ 
            b = c - b;
            return b;
        }   

    private:
        int c;
        int mul ( int c, int b){ 
            b = c * b;
            return c;
        }   
   
    
};

int main(void){
    printf("Using printf in c++ code \n");
    A obj;
    obj.add(10,20);
//    obj.sub(10,20); // Cannot call protected function
//    obj.mul(10,20); //  Cannot  call private function
    return 0;
}

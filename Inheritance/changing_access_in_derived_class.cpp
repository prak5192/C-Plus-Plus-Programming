#include<iostream>

using namespace std;
    
class Base {
    private:
        int m_nValue;
    public:
        Base(int value): m_nValue(value){}
    protected:
        void print_value(void){
            cout << "Base :" <<  m_nValue << endl;
        }
};

class Derived: public Base {
    private:
        int d_nvalue;
    public:
        Derived(int dvalue, int value = 20):Base(value),d_nvalue(dvalue) {}
    
    // Changing the access qualifier of m_nValue to public
        void print_value(void){
            Base :: print_value(); // adding functionality of the base
            cout << "Derived :" << d_nvalue << endl;
        }
        Base::print_value; // Changing the access rights from protected to public
};


int main(void){
    Derived obj1(10);
    obj1.print_value();


    return 0;
}


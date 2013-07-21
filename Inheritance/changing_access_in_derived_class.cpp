#include<iostream>

using namespace std;
    
class Base {
    private:
        int m_nValue;
    public:
        Base(int value): m_nValue(value){}
    protected:
        void print_value(void){
            cout << m_nValue << endl;
        }
};

class Derived: public Base {
    public:
        Derived(int value = 20):Base(value){}
    
    // Changing the access qualifier of m_nValue to public
        Base::print_value;
};


int main(void){
    Derived obj1(10);
    obj1.print_value();


    return 0;
}


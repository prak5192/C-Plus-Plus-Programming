#include<iostream>

using namespace std;
    

class Base
{
public:
    int m_nValue;
 
    Base(int nValue=0): m_nValue(nValue)
    {
        cout<< "Constructore of the base class : " << m_nValue << endl;
    }
};
 
class Derived: public Base
{
public:
    double m_dValue;
 
    Derived(double dValue=0.0): m_dValue(dValue)
    {
        cout<< "Constructore of the derived class : " << m_dValue << endl;
    }
};


int main(void){
    cout << "Instancing the Base class " << endl;
    Base cBase;
    cout << "Instancing the Derived class " << endl;
    Derived cDerived;

    return 0;
}

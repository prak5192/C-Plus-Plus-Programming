/* Example of + operator overloading */


#include<iostream>

using namespace std;

class Cents
{
    private:
        int m_nCents;
 
    public:
        Cents(int nCents) { 
            m_nCents = nCents; 
        }
 
        // Add Cents + Cents
        friend Cents operator+(const Cents &c1, const Cents &c2);
        friend Cents operator-(const Cents &c1, const Cents &c2);
        friend Cents operator*(const Cents &c1, const Cents &c2);
        friend Cents operator/(const Cents &c1, const Cents &c2);
 
        int GetCents() { return m_nCents; }
};
 
// note: this function is not a member function!
Cents operator+(const Cents &c1, const Cents &c2)
{
    // use the Cents constructor and operator+(int, int)
    return Cents(c1.m_nCents + c2.m_nCents);
}
 // note: this function is not a member function!
Cents operator-(const Cents &c1, const Cents &c2)
{
    // use the Cents constructor and operator+(int, int)
    return Cents(c1.m_nCents - c2.m_nCents);
}
 // note: this function is not a member function!
Cents operator*(const Cents &c1, const Cents &c2)
{
    // use the Cents constructor and operator+(int, int)
    return Cents(c1.m_nCents - c2.m_nCents);
}
 // note: this function is not a member function!
Cents operator/(const Cents &c1, const Cents &c2)
{
    // use the Cents constructor and operator+(int, int)
    return Cents(c1.m_nCents / c2.m_nCents);
}
 
int main()
{
    Cents cCents1(6);
    Cents cCents2(3);
    Cents cCentsSum = cCents1 + cCents2;
    cout << "I have " << cCentsSum .GetCents() << " cents." << endl;
    cCentsSum = cCents1 - cCents2;
    cout << "I have " << cCentsSum .GetCents() << " cents." << endl;
    cCentsSum = cCents1 * cCents2;
    cout << "I have " << cCentsSum .GetCents() << " cents." << endl;
    cCentsSum = cCents1 / cCents2;
    cout << "I have " << cCentsSum .GetCents() << " cents." << endl;
 
    return 0;
}

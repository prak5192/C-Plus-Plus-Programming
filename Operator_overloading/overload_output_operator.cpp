/*
Consider the expression cout << cPoint. If the operator is <<, what 
are the operands? The left operand is the cout object, and the 
right operand is your Point class object. cout is actually an 
object of type ostream. Therefore, our overloaded function will look 
like this:
    friend ostream& operator<< (ostream &out, Point &cPoint);

Implementation of operator<< is fairly straightforward -- because C++ 
already knows how to output doubles using operator<<, and our members 
are all doubles, we can simply use operator<< to output the member 
variables of our Point. Here is the above Point class with the overloaded operator<<.

*/


#include<iostream>

using namespace std;

class Point
{
    private:
        double m_dX, m_dY, m_dZ;
 
    public:
        Point(double dX=0.0, double dY=0.0, double dZ=0.0)
        {
            m_dX = dX;
            m_dY = dY;
            m_dZ = dZ;
        }
 
        friend ostream& operator<< (ostream &out, Point &cPoint);
 
        double GetX() { return m_dX; }
        double GetY() { return m_dY; }
        double GetZ() { return m_dZ; }
};
 
ostream& operator<< (ostream &out, Point &cPoint)
{
    // Since operator<< is a friend of the Point class, we can access
    // Point's members directly.
    out << "(" << cPoint.m_dX << ", " <<
        cPoint.m_dY << ", " <<
        cPoint.m_dZ << ")";
    return out;
}

int main()
{
    Point cPoint1(2.0, 3.0, 4.0);
    Point cPoint2(6.0, 7.0, 8.0);
 
    using namespace std;
    cout << cPoint1 << " " << cPoint2 << endl;
 
    return 0;
}

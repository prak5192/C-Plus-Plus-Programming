A constructor will have exact same name as the class and it does not have 
any return type at all, not even void. Constructors can be very useful for 
setting initial values for certain member variables.

Following example explain the concept of constructor:
*/

#include <iostream>
 
using namespace std;
 
class Line
{
    public:
        void setLength( double len );
        double getLength( void );
        Line();  // This is the constructor
 
    private:
        double length;
};
 
// Member functions definitions including constructor
Line::Line(void)
{
    cout << "Contructor gets called" << endl; 
    cout << "Object is being created" << endl;
}
 
void Line::setLength( double len )
{
    length = len;
}
 
double Line::getLength( void )
{
    return length;
}

// Main function for the program
int main( )
{
    Line line;
 
    // set line length
    line.setLength(6.0); 
    cout << "Length of line : " << line.getLength() <<endl;
 
    return 0;
}

#include<iostream>

using namespace std;

void foo(int &y) // y is now a reference
{
    cout << "y = " << y << endl;
    y = 6;
    cout << "y = " << y << endl;
} // y is destroyed here
 
int main()
{
    int x = 5;
    cout << "x = " << x << endl;
    foo(x);
    cout << "x = " << x << endl;
    return 0;
}



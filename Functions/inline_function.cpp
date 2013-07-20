/* 

C++ offers a way to combine the advantages of functions with the 
speed of code written in-place: inline functions. The inline keyword 
is used to request that the compiler treat your function as an 
inline function. When the compiler compiles your code, all inline 
functions are expanded in-place — that is, the function call is 
replaced with a copy of the contents of the function itself, which 
removes the function call overhead! The downside is that because the 
inline function is expanded in-place for every function call, this 
can make your compiled code quite a bit larger, especially if the 
inline function is long and/or there are many calls to the inline 
function.

*/
#include<iostream>

using namespace std;

inline int min(int nX, int nY)
{
    return nX > nY ? nY : nX;
}
 
int main(void)
{
    using namespace std;
    cout << min(5, 6) << endl;
    cout << min(3, 2) << endl;
    return 0;
}


/* Equivalent machinen code after compiling the code:

int main()
{
    using namespace std;
    cout << (5 > 6 ? 6 : 5) << endl;
    cout << (3 > 2 ? 2 : 3) << endl;
    return 0;
}

*/

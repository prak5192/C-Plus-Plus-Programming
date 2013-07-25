/*

           power_device
              /    \
             /      \
            /        \
           /          \
          /            \
    Scanner          Printer
          \            /    
           \          /
            \        /
             \      /
              \    /
              Copier

*/
#include<iostream>

class PoweredDevice
{
};
 
class Scanner: public PoweredDevice
{
};
 
class Printer: public PoweredDevice
{
};
 
class Copier: public Scanner, public Printer
{
};

Sol:

http://www.programmerinterview.com/index.php/c-cplusplus/diamond-problem/

Adding virtual keyword will tell complier to create a single copy 
for PoweredDevice in the Copier class.


class PoweredDevice
{
};
 
class Scanner: virtual public PoweredDevice // Adding virtual keyword.
{
};
 
class Printer: virtual public PoweredDevice // Adding virtual keyword
{
};
 
class Copier: public Scanner, public Printer
{
};



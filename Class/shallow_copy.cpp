/* Shallow copy example */



#include<iostream>
#include<cstring>


using namespace  std;


class Employee
{
	public:
  		char* name;
  		char dept[10];
};

int main()
{
  	Employee a;
  	a.name = new char[10];
  	strcpy(a.name, "spiderman");
  	strcpy(a.dept,"IT");

  //Root cause of shallow copy: Using default copy constructor
  	Employee b(a);
  	cout<<b.name << "  "<<b.dept<<" " << endl;

  //Problem of shallow copy
  	strcpy(b.name, "batman" );
  	cout<<b.name << "  "<<a.name<<" " << endl;


  //Root cause of shallow copy: Using default assignment operator
  	Employee c=a;

  //Problem of shallow copy
  	strcpy(c.name, "superman" );
  	cout<<a.name << "  "<<b.name << "  "<<c.name<<" " <<endl ;

}

/* 
Sample output
prak@prak:Class$ ./a.out 
spiderman  IT 
batman  batman 
superman  superman  superman 
*/

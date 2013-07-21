#include<iostream>
#include<string>

using namespace std;
class Person
{
private:
    string m_strName;
    int m_nAge;
    bool m_bIsMale;
 
public:
    Person(string strName, int nAge, bool bIsMale)
        : m_strName(strName), m_nAge(nAge), m_bIsMale(bIsMale)
    {
    }
 
    string GetName() { return m_strName; }
    int GetAge() { return m_nAge; }
    bool IsMale() { return m_bIsMale; }
};
 
class Employee
{
private:
    string m_strEmployer;
    double m_dWage;
 
public:
    Employee(string strEmployer, double dWage)
        : m_strEmployer(strEmployer), m_dWage(dWage)
    {
    }
 
    string GetEmployer() { return m_strEmployer; }
    double GetWage() { 
        cout << "Wage : " << m_dWage <<endl ; 
        return m_dWage; 
    }
};
 
// Teacher publicly inherits Person and Employee
class Teacher: public Person, public Employee
{
private:
     int m_nTeachesGrade;
 
public:
    Teacher(string strName, int nAge, bool bIsMale, string strEmployer, double dWage, int nTeachesGrade)
        : Person(strName, nAge, bIsMale), Employee(strEmployer, dWage), m_nTeachesGrade(nTeachesGrade)
    {
    }
    void get_value(void){
        Person :: GetName();
        Person :: GetAge();
        Person :: IsMale();
        Employee :: GetEmployer();
        Employee :: GetWage();
        cout << "Grade : " << m_nTeachesGrade << endl;
    }
};


int main(void){
    Teacher obj1("Prakash",29,1,"Engg",40000.00,1);
    obj1.get_value (); 
    return 0;

}

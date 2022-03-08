/*QUESTION :-
              Define a class Person having name as a data member. Inherit two classes Student and 
Employee from Person. Student has additional attributes as course, marks and year and 
Employee has department and salary. Write displayO method in all the three classes to 
display the corresponding attributes. Provide the necessary methods 10 show runtime 
polymorphism. 
SOLUTION :-
*/
#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;

    Person(string n)
    {
        name = n;
    }

    Person()
    {
    }

    virtual void display()
    {
        cout << name << endl;
    }
};

class Student : public Person
{
public:
    string course;
    int marks;
    unsigned int year;

    Student(string n, string c, int m, int y) : Person(n)
    {
        course = c;
        marks = m;
        year = y;
    }

    Student()
    {
    }

    void display()
    {
        cout << "The name of student is " << name << endl;
        cout << "The name of course that student is pursuing is " << course << endl;
        cout << "The marks obtained by student is " << marks << endl;
        cout << "The student is in " << year << "st year" << endl;
    }
};

class Employee : public Person
{
public:
    string department;
    long int salary;

    Employee(string n, string d, long s) : Person(n)
    {
        department = d;
        salary = s;
    }

    void display()
    {
        cout << "The name of employee is " << name << endl;
        cout << "The department of employee is " << department << endl;
        cout << "The salary of employee is " << salary << endl;
    }
};

int main()
{
    Person *obj1;

    Student obj2("UPLAKSH TYAGI", "BSc_CS", 25, 1);

    obj1 = &obj2;
    obj1->display();

    Employee obj3("UPLAKSH TYAGI", "Computer_Department", 100000);
    obj1 = &obj3;
    obj1->display();

    return 0;
}
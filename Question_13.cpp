/*QUESTION :-
              Create a class Student containing fields for Roll No., Name, Class, Year and Total 
Marks. Write a program to store 5 objects of Student class in a file. Retrieve these records 
from file and display them
SOLUTION :-
*/
#include <bits/stdc++.h>
#include<iomanip>
using namespace std;

class StudentInfo
{
public:
    int RollNumber;
    string Name;
    int Class;
    int Year;
    int Marks;
};

int main()
{
    ofstream f2;
    f2.open("studentinfo.txt");

    for (int i = 0; i < 2; i++)
    {
        StudentInfo object;
        
        cout<<"Enter roll number:";
        cin >> object.RollNumber;
        f2 << object.RollNumber << "  " << ;

        cin.ignore();
        
        cout<<"Enter student name:";
        getline(cin, object.Name);
        f2 << object.Name << "    ";
        
        cout<<"Enter student class:";

        cin >> object.Class;
		
		cout<<"Enter student year:";
		cin>>object.Year;
		cout<<"Enter student marks:"; 
		cin>>object.Marks;
        f2 << object.Class << "  " << object.Year << "  " << object.Marks << endl;
        cout<<"\n";
    }
    
    cout<<"\n\n\n\n R.No. Name   Class  Year  Marks \n\n";
    ifstream f("studentinfo.txt");

    if (f.is_open())
        cout << f.rdbuf();
    

    return 0;
}
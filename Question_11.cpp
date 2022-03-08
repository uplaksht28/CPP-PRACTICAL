/*QUESTION :- 
              Write a program to read two numbers p and q. If q is O then throw an exception else display the result of p/q.
SOLUTION :-
*/
#include <iostream>
using namespace std;

int main()
{
    float p,q;
    float x = p/q;

    cout << "Enter the value of first number ";
    cin >> p;
    cout << endl << "Enter the value of second number";
    cin >> q;
    cout << endl;

    
    if (q==0)
    {
        cout << "Please enter a valid number because denominator cannot be 0" << endl;
    }
    else
    {
        cout << "The result of p/q is " << x << endl;
    
    }
    return(0);
}
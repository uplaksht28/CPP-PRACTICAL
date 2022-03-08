/*QUESTION :-
              Write a program to calculate GCD of two numbers (i) with recursion (ii) without recursion
SOLUTION :-
*/
#include <bits/stdc++.h>
using namespace std;
int rec(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // base case
    if (a == b)
        return a;

    // recursive relation
    if (a > b)
        return rec(a - b, b);
    else
        return rec(a, b - a);
}
int without_rec(int a, int b)
{
    int x = 1;
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;

    if (a < b)
    {

        for (int i = 2; i <= a; i++)
        {
            if (b % a == 0)
                return a;

            if (a % i == 0 && b % i == 0)
            {
                x = i;
            }
        }
        return x;
    }
    else
    {

        for (int i = 2; i <= b; i++)
        {
            if (a % b == 0)
                return a;

            if (a % i == 0 && b % i == 0)
            {
                x = i;
            }
        }
        return x;
    }
}
int main()
{
    int a, b;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
    cout << "With recursion the value of gcd is " << rec(a, b) << endl;
    cout << "Without recursion the value of gcd is " << without_rec(a, b) << endl;

    return 0;
}
/*Question :- 
             Write a program to compute the sum of the first o tenns of the followiog series: 
S = I - I / (2" 2) + I / (3" 3) - ... I / (o "n) 
where " is exponentiation. 
The number of terms n is to be taken from user through command line. If command line 
11 
argument is not found then prompt the user to enter the value of n.
SOLUTIOIN :-*/
#include <bits/stdc++.h>
using namespace std;

double Series(int n)
{
    double val = 0.0;
    for (int i = 1; i <= n; ++i)
    {
        if (i % 2 == 0)
            val -= (1 / pow(i, i));
        else
            val += (1 / pow(i, i));
    }
    return val;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        int n;
        cout << "Enter the number whose values you want to sum up :- ";
        cin >> n;
        cout << "The sum of the values you entered is " << Series(n);
    }

    cout << Series(*argv[1] - 48) << endl;

    return 0;
}
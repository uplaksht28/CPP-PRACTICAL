/*QUESTION :- 
              Write a program to remove the duplicates from an array. 
SOLUTION :- */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int array[] = {1, 2, 3, 3, 3, 4, 5, 5, 6, 7,};
    int n = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < n; i++)
    {
        s.insert(array[i]);
    }
    set<int>::iterator itr;
    for (itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << ' ';
    }

    return (0);
}
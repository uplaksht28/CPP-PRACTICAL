/*QUESTION :-
              Write a program to search a given elemenl in a set ofN numbers using Binary search 
(i) with recursion (ii) without recursion.
SOLUTION :-
*/
#include <bits/stdc++.h>
using namespace std;

int recursion(int *a, int s, int e, int val)
{
    // base case
    if (s > e)
        return -1;
    int x = s + (e - s) / 2;

    // recursive call

    // element found
    if (a[x] == val) 
        return x;
    else if (a[x] < val)
    {
        return recursion(a, x + 1, e, val);
    }
    else
        return recursion(a, s, x - 1, val);
}

int without_recursion(int a[], int s, int e, int val)
{
    int x = s + (e - s) / 2;
    while (s <= e)
    {
        if (a[x] == val)
            return x;
        else if (a[x] > val)
        {
            e = x - 1;
        }
        else
        {
            s = x + 1;
        }
        x = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    int a[6] = {1, 3, 5, 7, 34, 44};
    int size = 6;
    int val = 7;
    cout << "With recursion the element is at index :- " << recursion(a, 0, size - 1, val) << endl;
    cout << "Without recursion the element is at index :- " << without_recursion(a, 0, size - 1, val);

    return 0;
}
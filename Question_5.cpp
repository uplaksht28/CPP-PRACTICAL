/*QUESTION :-
              Write a program to merge two ordered arrays to get a single ordered array. 
SOLUTION :-
*/
#include <bits/stdc++.h>
using namespace std;

void merge_array(int a1[], int m, int a2[], int n, int a3[])
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (a1[i] < a2[j])
            a3[k++] = a1[i++];
        else
            a3[k++] = a2[j++];
    }
    while (i < m)
    {
        a3[k++] = a1[i++];
    }
    while (j < n)
    {
        a3[k++] = a2[j++];
    }
}
void show(int a3[], int c)
{
    for (int i = 0; i < c; i++)
    {
        cout << a3[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a1[5] = {1, 3, 4, 6, 7};
    int a2[4] = {2, 5, 8, 9};
    int a3[9] = {0};
    merge_array(a1, 5, a2, 4, a3);
    show(a3, 9);
    return 0;
}
/*QUESTION :-
              Create Matrix class. Write a menu-driven program to perform following Matrix operations: 
a) Sum 
b) Product 
c) Transpose 
SOLUTION :-
*/
#include <bits/stdc++.h>
using namespace std;

class Mat
{
public:
    void for_sum(int mat1[3][3], int mat2[3][3])
    {
        int mat3[3][3];
        cout << "The addition of the two matrices :- \n";
        // sum up the matrices
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                mat3[i][j] = mat1[i][j] + mat2[i][j];
            }
        }
        // print the sum of matrices
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << mat3[i][j] << " ";
            }
            cout << endl;
        }
        system("pause");
    }



    void for_product(int mat1[3][3], int mat2[3][3])
    {
        int mat3[3][3];
        int prod = 0;
        cout << "The multiplication of the two matrices is :- \n";
        // multiply two matrices
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                prod = 0;
                for (int k = 0; k < 3; k++)
                {
                    prod += mat1[i][k] * mat2[k][j];
                }
                mat3[i][j] = prod;
            }
        }
        // print the product of matrices
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << mat3[i][j] << " ";
            }
            cout << endl;
        }
        system("pause");
    }



    void for_transpose(int mat[3][3])
    {

        cout << "The Transpose of the matrix you selected is : " << endl;
        // to make the transpose of matrix
        for (int i = 1; i < 3; i++)
        {
            for (int j = 0; j < i; j++)
            {
                swap(mat[i][j], mat[j][i]);
            }
        }
        // print the transposed matrix
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
        system("pause");
    }
};

int main()
{
    Mat obj;

    int mat1[3][3], mat2[3][3];

    cout << "Enter the elements for matrix 1 :- " << endl;
    // valuation of matrix 1
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter the elements for matrix 2 :-" << endl;
    // valuation of matrix 2
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat2[i][j];
        }
    }

    unsigned val;

    while (1)
    {
        system("cls");
        cout << "Type 1 to get the Sum of matrix 1 and matrix 2 " << endl;
        cout << "Type 2 to get the Product of matrix 1 and matrix 2." << endl;
        cout << "Type 3 to get the Transpose of matrix 1 and matrix 2." << endl;
        cout << "Enter any other value to exit." << endl;
        cin >> val;

        switch (val)
        {
        case 1:
            obj.for_sum(mat1, mat2);
            break;

        case 2:
            obj.for_product(mat1, mat2);
            break;

        case 3:
            unsigned int key;
            cout << "Press 1 for matrix 1 and 2 for matrix 2 : ";
            cin >> key;

            if (key == 1)
                obj.for_transpose(mat1);
            else if (key == 2)
                obj.for_transpose(mat2);

            break;

        default:
            return 0;
        }
    }

    return 0;
}
/*QUESTION :-
              Rewrite Matrix class of Q8 with exception handling. Exceptions should be thrown by the functions if matrices passed to them are incompatible and handled by main() function.
SOLUTION :-
*/
#include <bits/stdc++.h>
using namespace std;

class Mat
{
public:

    void for_sum(vector<vector<int>> mat1, vector<vector<int>> mat2)
    {
        vector<vector<int>> mat3;
        cout << "The addition of the two matrices : \n";
        for (int i = 0; i < mat1.size(); i++)
        {
            vector<int> temp;
            for (int j = 0; j < mat1[i].size(); j++)
            {
                int var;
                var = mat1[i][j] + mat2[i][j];
                temp.push_back(var);
            }
            mat3.push_back(temp);
        }

        for (int i = 0; i < mat3.size(); i++)
        {
            for (int j = 0; j < mat3[i].size(); j++)
            {
                cout << mat3[i][j] << " ";
            }
            cout << endl;
        }
        system("pause");
    }

    void for_product(vector<vector<int>> mat1, vector<vector<int>> mat2)
    {
        vector<vector<int>> mat3;
        int prod = 0;
        cout << "The multiplication of the two matrices: \n";

        for (int i = 0; i < mat1.size(); i++)
        {
            vector<int> temp;
            for (int j = 0; j < mat2.size(); j++)
            {
                prod = 0;
                for (int k = 0; k < mat1[i].size(); k++)
                {
                    prod += mat1[i][k] * mat2[k][j];
                }
                temp.push_back(prod);
            }
            mat3.push_back(temp);
        }

        for (int i = 0; i < mat3.size(); i++)
        {
            for (int j = 0; j < mat3[i].size(); j++)
            {
                cout << mat3[i][j] << " ";
            }
            cout << endl;
        }
        system("pause");
    }

    void for_transpose(vector<vector<int>> mat)
    {

        for (int i = 1; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[i].size(); j++)
            {
                swap(mat[i][j], mat[j][i]);
            }
        }

        cout << "The Transpose of the matrix you selected is :" << endl;
        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[i].size(); j++)
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
    int var;
    int x, y;
    cout << "Enter the size of the matrix 1 : ";
    cin >> x >> y;

    vector<vector<int>> mat1;

    cout << "Enter the elements for matrix 1 :- " << endl;
    for (int i = 0; i < x; i++)
    {
        vector<int> temp;
        for (int j = 0; j < y; j++)
        {
            cin >> var;
            temp.push_back(var);
        }
        mat1.push_back(temp);
    }

    int n, m;
    cout << "Enter the size of the matrix 2 : ";
    cin >> n >> m;
    vector<vector<int>> mat2;
    cout << "Enter the elements for matrix 2 :- " << endl;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            cin >> var;
            temp.push_back(var);
        }
        mat2.push_back(temp);
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
            try
            {
                if (x == n && y == m)
                    obj.for_sum(mat1, mat2);
                else
                    throw -1;
            }
            catch (int i)
            {
                cout << "Disobey properties of matrix" << endl << endl;
                system("pause");
            }

            break;

        case 2:
            try
            {
                if (y == n)
                    obj.for_product(mat1, mat2);
                else
                    throw -1;
            }
            catch (int i)
            {
                cout << "Disobey properties of matrix" << endl << endl;
            }

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
#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> r >> c;
    int a[r][c];
    cout << "Enter the elements of the matrix: " << endl;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "The matrix is: " << endl;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int b[r][c];
    cout << "Transpose of the matrix is: " << endl;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
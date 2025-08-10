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
    int sum=0;
    cout << "Sum of elements in the matrix: ";
     for(int i = 0; i < r; i++) 
    {
        for(int j = 0; j < c; j++) 
        {
            if(i==j)    
            {
                sum += a[i][j]; 
            }
        }
    }
    cout << sum << endl;
    return 0;
}
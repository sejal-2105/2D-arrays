#include <iostream>
using namespace std;
int main()
{
    int r1, r2, c1, c2;
    cout<< "Enter the number of rows and columns for the first matrix: ";
    cin >> r1 >> c1;
    cout<< "Enter the number of rows and columns for the second matrix: ";
    cin >> r2 >> c2
    int a[r1][c1], b[r2][c2], result[r1][c2];
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> b[i][j];
        }
    }
    cout<< "First matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    } 
    cout<< "Second matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
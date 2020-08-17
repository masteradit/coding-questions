// Read and write 2D arrays

#include <iostream>

using namespace std;

int main()
{
    int m, n;
    int a[100][100];

    cout << "Enter the dimensions of matrix.\n";
    cin >> m >> n;

    cout << "Enter the elements of the matrix.\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Entered matrix is:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
}
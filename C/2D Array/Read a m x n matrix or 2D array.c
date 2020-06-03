# Read a m x n matrix or 2D array

#include <stdio.h>

int main()
{
    int m, n;
    int arr[100];
    
    printf("Enter the dimensions of matrix m and n\n");
    scanf("%d %d", &m, &n);
    
    printf("Enter the elements of the matrix");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            // This will store the numbers into the matrix
            scanf("%d", &arr[i][j]);
        }
    }

    return 0;
}

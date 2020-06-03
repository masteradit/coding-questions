# Sum of secondary diagonal elements of 2D array or matrix

#include <stdio.h>

int main()
{
    // Reading a 2D array
    int m, n;
    int arr[100][100];
    
    printf("Enter the dimensions of matrix m and n\n");
    scanf("%d %d", &m, &n);
    
    printf("Enter the elements of the matrix\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            // This will store the numbers into the array
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Sum of secondary diagonal elements of a 2D array
    if (m == n) {
        int sum = 0;
    
        for (int i = 0; i < m; i++) {
            sum = sum + arr[i][m-i-1];
        }
        
        printf("Sum of secondary diagonal elements is %d", sum);
    
    } else {
        printf("Input matrix is not a square matrix.");
    }
    
    return 0;
}

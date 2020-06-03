# Read and print a m x n matrix or 2D array

#include <stdio.h>

int main()
{
    int m, n;
    int arr[100][100];
    
    // Reading a 2D array
    printf("Enter the dimensions of matrix m and n\n");
    scanf("%d %d", &m, &n);
    
    printf("Enter the elements of the matrix\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            // This will store the numbers into the array
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Printing a 2D array
    printf("2D array entered by the user:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

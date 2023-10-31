//Add Matrices

#include <stdio.h>

int main() {
    int m, n, c, d;

    // Get the dimensions of the matrices
    printf("Enter the number of rows and columns of the matrices (m n): ");
    scanf("%d %d", &m, &n);

    int first[10][10], second[10][10], sum[10][10];

    printf("Enter the elements of the first matrix:\n");
    for (c = 0; c < m; c++) {
        for (d = 0; d < n; d++) {
            scanf("%d", &first[c][d]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (c = 0; c < m; c++) {
        for (d = 0; d < n; d++) {
            scanf("%d", &second[c][d]);
        }
    }

    // Add the matrices
    for (c = 0; c < m; c++) {
        for (d = 0; d < n; d++) {
            sum[c][d] = first[c][d] + second[c][d];
        }
    }

    // Display the result
    printf("Sum of the entered matrices:\n");
    for (c = 0; c < m; c++) {
        for (d = 0; d < n; d++) {
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }

    return 0;
}

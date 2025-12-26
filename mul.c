#include<stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows for Matrix A: ");
    scanf("%d", &m);

    printf("Enter number of columns for Matrix A: ");
    scanf("%d", &n);

    int arr[m][n];
    printf("Enter elements of Matrix A:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int p, q;
    printf("Enter number of rows for Matrix B: ");
    scanf("%d", &p);

    printf("Enter number of columns for Matrix B: ");
    scanf("%d", &q);

    int brr[p][q];
    printf("Enter elements of Matrix B:\n");
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            scanf("%d", &brr[i][j]);
        }
    }

    // Check multiplication possible
    if (n != p) {
        printf("Matrix cannot be multiplied (columns of A != rows of B)\n");
        return 0;
    }

    int re[m][q];

    // Matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            re[i][j] = 0;
            for (int k = 0; k < n; k++) {
                re[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }

    // Print result matrix
    printf("Resultant Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", re[i][j]);
        }
        printf("\n");
    }

    return 0;
}

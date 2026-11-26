#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Calculate the number of rows for the tree foliage
    int line = ((n - 1) / 2) + 6;
    int space = line - 1;
    int k = 1;

    // Print the triangular foliage
    for (int i = 1; i <= line; i++) {
        for (int j = 1; j <= space; j++) {
            printf(" ");
        }
        for (int j = 1; j <= k; j++) {
            printf("*");
        }
        printf("\n");
        space--;
        k += 2;
    }

    // Print the trunk (5 rows, width N, centered)
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= line - ((n + 1) / 2); j++) {
            printf(" ");
        }
        for (int j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        int a[n], b[n], c[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }
        
        // Sort array B in ascending order using Bubble Sort (no compare function needed)
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (b[j] > b[j + 1]) {
                    int temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }
        
        // Calculate the absolute difference between A[i] and B[i]
        for (int i = 0; i < n; i++) {
            int diff = a[i] - b[i];
            if (diff < 0) {
                diff = -diff; 
            }
            c[i] = diff;
        }
        
        // Print array C for the current test case
        for (int i = 0; i < n; i++) {
            printf("%d ", c[i]);
        }
        printf("\n");
    }
    
    return 0;
}
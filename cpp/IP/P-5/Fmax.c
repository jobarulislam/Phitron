#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    
    int max = 0;
    for (int i = 1; i <= N; i++) {
        int X;
        scanf("%d", &X);
        if (X > max) {
            max = X;
        }
        
    }
    printf("%d\n", max);
    return 0;
}
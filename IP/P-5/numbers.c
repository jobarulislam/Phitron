#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        int X;
       scanf("%d ", &X);
       while(X!=0){
       printf("%d ", X%10);
       X/=10;
       }
       printf("\n");
    }
    return 0;
}
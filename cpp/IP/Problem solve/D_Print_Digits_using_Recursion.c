#include<stdio.h>
void s(int n){
     if(n == 0){
        return;
    }
    s(n/10);
    int ld = n % 10;
    printf("%d ", ld);
}
int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0; i<t;i++){
        int n;
        scanf("%d", &n);
        if(n==0){
            printf("%d", n);
        }
        s(n);
        printf("\n");

    }
    return 0;
}
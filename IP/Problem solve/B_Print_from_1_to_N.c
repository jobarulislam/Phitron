#include<stdio.h>
int re(int n){
    if(n == 0){
        return 0;
    }
    re(n-1);
    printf("%d\n", n);
}
int main(){
    int n;
    scanf("%d", &n);
    re(n);
    return 0;
}
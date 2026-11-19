#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i =0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int x = a[0];
    int y = 1 ;
    for (int i = 0; i <n ; i++){
       if (x > a[i]){
        x = a[i];
        y = i+1;
       }
    }
    printf("%d %d", x, y);

    return 0;
}
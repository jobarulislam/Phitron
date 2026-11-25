#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0;i<n; i++){
        scanf("%d", &a[i]);
    }
   int h = n/2;
        int b[h];
        int c[h];
        for (int j = 0; j < h ; j++){
            b[j] = a[j];
        }
        for (int k = 0; k < h ; k++){
            c[k] = a[n-1-k];
        }

        int p = 1;
        for (int i =0 ; i < h; i++){
        if (b[i] != c[i]){
            p = 0;
            break;
        }
    }
        if (p){
            printf("YES");
        }
        else{
            printf("NO");
        }
    
    return 0;
}
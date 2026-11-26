#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0 ; i < n ; i++){
        
        scanf("%d", &a[i]);
    }
    int max = -100000;
    for(int i =0; i<n ;i++){
        for(int j = i+1 ; j<n;j++){
            int d = a[j] - a[i];
            if(max>d)
            {
                max = d;
            } 
        }
    }
    printf("%d", max);
return 0;
}
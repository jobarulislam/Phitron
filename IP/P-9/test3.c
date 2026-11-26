#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int i =0; 
    int j =n-1 ;
    while(i<j){
        
            int tmp = a[j];
            a[j] = a[i];
            a[i] = tmp;
            j--;
            i++;
        
    }
    for (int i =0 ; i <n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int A[n];
    for(int i =0; i<n; i++){
        scanf("%d", &A[i]);
    }
    for(int j = 0; j<n; j++){
        if(A[j] < 0){
             A[j] = 2 ;
        }
        else if (A[j]> 0){
            A[j] = 1;
        }
        else {
            A[j] = 0;
        }
    }
    for (int j = 0 ; j < n; j++){
        printf("%d ", A[j]);
    }
    return 0;
}
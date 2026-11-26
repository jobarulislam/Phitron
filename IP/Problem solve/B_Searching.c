#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int A[n];
    for(int i =0; i<n; i++){
        scanf("%d", &A[i]);
    }
    int x;
    int found = -1 ;
    scanf("%d", &x);
    for(int j = 0; j<n; j++){
        if(A[j]==x){
            found = j;
            break;
        }
    }
        printf("%d", found);
    return 0;
}
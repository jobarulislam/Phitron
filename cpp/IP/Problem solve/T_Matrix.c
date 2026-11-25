#include<stdio.h>
#include<math.h>
int main(){
 int n;
 scanf("%d",&n);
 int a[n][n];
 int psum = 0;
 int ssum = 0;
 for(int i =0; i<n;i++){
    for(int j = 0 ; j<n;j++ ){
        scanf("%d",&a[i][j]);
        if (i == j){
            psum += a[i][j];
        }
        if (i + j == n - 1){
            ssum += a[i][j];
        }
    }
 }   
 printf("%d\n", abs(psum - ssum));
 return 0; 
}
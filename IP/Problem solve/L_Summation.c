#include<stdio.h>
void sum(int a[],int i,int n){
    if (i == n-1){
        return;
    }
    int s = s + a[i];
    n--;
    i--;
    sum(a,i,n);
    printf("%d",s);
    
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(int i =0; i<n;i++){
    sum(a ,i,n);
    }

}
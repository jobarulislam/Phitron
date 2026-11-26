#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1; i <= N ; i++){
        if (i % 5 == 0){
    printf("%dYes\n", i);
        }
        else{
             printf("%dNo\n", i);
        }
    }
    return 0;
}
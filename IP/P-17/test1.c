#include<stdio.h>

void hello(int i){
    printf("hello\n");
    if(i == 5){
return;
    }
    hello(i +1);
}
int main(){
    int i = 1;
    hello(i);
    return 0;
}
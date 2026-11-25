#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int m = 2*n-1;
    for(int i = 1; i <= n; i++){
        int len = 2*i-1;
        int space = (m-len)/2;
        char ch;
        if (i%2==0){
            ch = '-';
        }
        else{
            ch = '#';
        }
        for(int j = 0; j < space; j++){
            printf(" ");
        }
        for(int j = 0; j < len; j++){
            printf("%c", ch);
        }
        printf("\n");
    }
    for(int i = n-1; i >= 1; i--){
        int len = 2*i-1;
        int space = (m-len)/2;
        char ch;
        if (i%2==0){
            ch = '-';
        }
        else{
            ch = '#';
        }
        for(int j = 0; j < space; j++){
            printf(" ");
        }
        for(int j = 0; j < len; j++){
            printf("%c", ch);
        }
       
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

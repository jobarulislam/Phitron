#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[10001];
    scanf("%s", s);
    int f[26]={0};
    for(int i =0 ; s[i]!='\0';i++){
        
        f[s[i]-97]++;
    }
    for(int i =0; i<26;i++){
        if(f[i]!=0){
        printf("%c - %d \n", i+97, f[i]);
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

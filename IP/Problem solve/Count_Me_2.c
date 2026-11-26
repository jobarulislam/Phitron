#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[100001];
    scanf("%s", s);
    int length = strlen(s) ;
    int count = 0;
    int v =0;
    char vaol[5]={'a','e','i','o','u'};
    for(int i = 0 ; s[i] != '\0';i++){
        
         
        for(int j= 0; j< 5; j++){
           
            if(s[i] == vaol[j]){
                v++;
                break;
            }
        }
        
    }   
    count = length - v;
    printf("%d" ,count); 
    return 0;
}

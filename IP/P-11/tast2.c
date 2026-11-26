#include <stdio.h>
#include<string.h>
int main(){
    char a[101], b[101];
    scanf("%s %s", a ,b);
    int a = strlen(a);
    int b = strlen(b);
    int c = 0;
    if (a<b){
     c = b;
    }
    else {
     c =a;   
    }
   for(int i =0; i <= c;i++){
    if (a[i]==b[i]){
        continue;
    }
    
    printf("%s %s", a, b);
    return 0;
}
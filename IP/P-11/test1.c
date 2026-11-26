#include <stdio.h>
#include<string.h>
int main(){
    char a[101], b[101];
    scanf("%s %s", a ,b);
    int lengtha = strlen(a);
    int lengthb = strlen(b);
   /* for(int i = lengtha, j=0  ; i <= lengtha + lengthb, j<=lengthb;i++, j++){
        a[i] = b[j];
    }*/
   for(int i = 0; i <= lengthb; i++){
    a[i+lengtha] = b[i];
   }
    printf("%s %s", a, b);
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int t;
scanf("%d \n",&t);
for(int i=0; i<t;i++){
    char s[10001];
    scanf("%s",s);
    int countc = 0 , counts = 0 , countd = 0;
    for(int i =0; s[i]!='\0';i++){
        if (s[i]>=65 && s[i]<=90){
            countc++;
        }
        else if (s[i]>=97 && s[i]<=122){
            counts++;
        }
        else if (s[i]>=48 && s[i]<=57){
            countd++;
        }
    }
    printf("%d %d %d\n", countc, counts, countd);
}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

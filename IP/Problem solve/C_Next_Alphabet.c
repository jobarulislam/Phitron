#include <stdio.h>
int main(){
    char a;
    scanf("%c", &a);
    if (a>='a' && a<'z'){
        printf("%c", a+1);
    }
    if (a =='z'){
        printf("a");
    }
    return 0;
}
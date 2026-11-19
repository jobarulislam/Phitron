#include <stdio.h>

int main(){
    char n[1000001];
    scanf("%s", n);

    int s = 0;
    for (int i =0; n[i] !='\0';i++){
        s += n[i]- '0';
    }
    printf("%d", s);
    return 0;
}
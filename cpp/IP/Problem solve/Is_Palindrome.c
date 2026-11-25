#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int is_palindrome(char str[]) {
    int len = strlen(str);
    for(int i = 0; i < len/2; i++) {
        if(str[i] != str[len-i-1]) {
            return 0; 
        }
    }
    return 1;
}
int main() {
    char str[1001];
    scanf("%s", str);
    if(is_palindrome(str)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

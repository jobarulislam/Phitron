#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int r ,c ;
scanf("%d %d", &r ,&c);
int a[r][c];
for(int i =0;i<r;i++){
    for(int j = 0;j<c;j++){
        scanf("%d", &a[i][j]);
        
        }}
        if (r!=c){
            printf("NO");
            return 0;
        }
        int jadu= 1;
        for(int i =0;i<r;i++){
    for(int j = 0;j<c;j++){
       if (i == j || i + j == r - 1) {
                if (a[i][j] != 1) {
                    jadu = 0;
                    break;
                }}
                else{
                    if (a[i][j] != 0) {
                    jadu = 0;
                    break;
                }
                }
        if (!jadu) {
            break;
        }
        }}
        if (jadu) {
        printf("YES");
    } else {
        printf("NO");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

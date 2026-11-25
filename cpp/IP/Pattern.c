#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int max_ch = 2*n -1;
    char ch ;
    for(int i = 1; i<=n;i++){
        int len_ch = 2*i -1;
        int s = (max_ch - len_ch)/2;
        
        if(i%2 == 0){
            ch = '-';
        }
        else{
            ch = '#';
        }
        for(int k =0 ; k<s; k++){
            printf(" ");
        }
        for(int j = 0; j<len_ch; j++){
            printf("%c", ch);
        }
        printf("\n");
    }
    for(int i = n-1; i>=1;i--){
        int len_ch = 2*i -1;
        int s = (max_ch - len_ch)/2;
        if(i%2==0){
            ch ='-';
        }
        else{
            ch = '#';
        }
        for(int j = 0; j<s; j++){
            printf(" ");
        }
        for(int j = len_ch - 1; j>=0; j--){
            printf("%c",ch);
        }
        printf("\n");
    }
    
    return 0;
}
#include <stdio.h>
int main(){
    int X, n ;
    scanf("%d %d", &X, &n);
    int a[n];
    for(int i =0; i<n ;i++){
        scanf("%d", &a[i]);
    }
    int c = 0;
    int b = 0;
    int i = 0;
    
    int f = 0;
    while(i < n -1){
        b = a[i];
        for(int j = i+1; j<n;j++){
            c = a[j];
           // int  sum = b +c;
           if (b + c == X){
            printf("YES ... %d + %d = %d\n", b , c, X);
            break;
        }
        }
       
        if(b + c != X){
            f++;
        }
        i++;
    }
if (f ==n ){
    printf("NO");
}

      /*for(int j =1, i = 0; j <=n i<n;i++,j++){
         b = a[i];
         c = a[j];
         if(b + c == X){
            printf("yes");

      for(int ;j<=n;j++){
             c = a[j];
              if(b + c == X){
            printf("yes");
            
        }*/
        
        
       
    
    return 0;
}
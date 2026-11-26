#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int t;
 scanf("%d", &t);
 
 for(int i =0;i<t;i++){
     long long m , a ,b , c;
 scanf("%lld %lld %lld %lld", &m , &a, &b, &c);
     long long x;
     long long p = a*b*c;

     if (m%p == 0){
        x = m/p;
        printf("%lld\n",x);
     }
     else{
        printf("-1\n");
     }
    
 }
 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

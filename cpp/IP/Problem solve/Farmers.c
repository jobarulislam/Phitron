#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m1 , m2 , d;
    scanf("%d %d %d \n", &m1, &m2, &d);
    int mt = m1 + m2;
    int d1 = (d*m1)/mt;
    int d2 = d - d1;
    printf("%d \n ",d2);
    }
    
    
  
    return 0;
}

#include<stdio.h>
#include<math.h>
int main(){
    int r=5, c=5;
    int a[r][c];
    int rn =0, cn =0;
    for(int i =0;i < r;i++){
        for(int j = 0 ; j<c;j++){
            scanf("%d ", &a[i][j]);
            if(a[i][j]==1){
                rn =i ;
                cn = j;
            }
        }
    }
    int rp = abs(rn -2);
    int cp = abs(cn -2);
    int t = rp + cp;
    printf("%d" ,t);
    return 0;
}
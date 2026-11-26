#include<bits/stdc++.h>
using namespace std;
int main(){
    long double   a , b ,c ,d;
    cin >> a >>b >>c >>d ;
    long double l = b * logl(a);
    long double r = d * logl(c);

   /* for(int i =0 ;i <b;i++){
        l = l * a;
    }
    long double r =1;
    for(int i =0 ;i <d;i++){
        r = r * c;
    }*/
    if(l>r){
        cout<<"YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}
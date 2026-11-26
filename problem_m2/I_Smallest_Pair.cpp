#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t;
    while(t!=0){
        int n;
    cin >> n;
    long long a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    long long f = LLONG_MAX;
    for(int i =0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            int f1 = a[i]+a[j]+j-i;
            if(f>f1){
                f= f1;
            }
        }
    }
    cout << f;
        t--;
    }
    return 0;
}
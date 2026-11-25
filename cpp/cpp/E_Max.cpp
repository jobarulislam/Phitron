#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long a[n];
    for(int i =0 ; i<n; i++){
        cin >> a[i];
    }
    int m = 0 ;
    for(int i =0 ;i <n;i++){
        if (a[i]>m){
            m = a[i];
        }
    }
    cout << m;
    return 0;
}
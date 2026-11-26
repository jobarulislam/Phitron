#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int f = 0;
    for(int i = 0 , j = n-1;i < n , j >=0;i++,j--){
        
            if(a[i]!=a[j]){
                f++;
                break;
            }
            
    }
    f==0?cout<<"YES" : cout << "NO";
    return 0;
}
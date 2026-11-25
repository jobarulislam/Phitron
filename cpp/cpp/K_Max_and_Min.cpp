#include<bits/stdc++.h>
using namespace std;
int main(){
    int a , b , c;
    cin >> a >> b >> c;
    int m = max(a, b);
    
    int mi = min(a, b);
    cout << min(mi,c) << " " << max(m,c);
    return 0;
}
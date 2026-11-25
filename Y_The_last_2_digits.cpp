#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a , b, c, d;
    cin >> a >> b >> c >> d;
    int ld = ((a%100)*(b%100)*(c%100)*(d%100))% 100;
    if (ld < 10){
        cout <<'0' << ld;
    }
    else {
    cout << ld;
    }
    return 0;
}
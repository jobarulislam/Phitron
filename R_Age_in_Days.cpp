#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a;
    cin >> a;
    long long y = a/365;
    long long f = a%365;
    long long m = f/30;
    long long d = f%30;
    cout << y << " years" << endl;
    cout<<m << " months" <<endl;
    cout << d << " days" << endl;
     
    return 0;
}
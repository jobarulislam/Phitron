#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x , y;
    cin >> x >> y;
    long long sum = x + y;
    long long mul = x * y;
    long long sub = x - y;
    
    cout << x << " + " << y << " = " << sum << endl << x << " * " << y << " = " << mul << endl << x << " - " << y << " = " << sub;
    return 0;
}
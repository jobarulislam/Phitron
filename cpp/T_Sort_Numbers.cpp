#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a , b , c ;
    cin >> a >>b >>c;
    long long fm = max(a,b);
    long long fm1 = max(fm,c);
    long long minl = min(a,b);
    long long minf = min(minl,c);

    if (fm1 == a && minf == c){
        cout << c <<endl;
        cout << b << endl;
        cout << a << endl;

    }
    else if (fm1 == a && minf == b){
        cout << b <<endl;
        cout << c << endl;
        cout << a << endl;
    }
    else if (fm1 == b && minf == c){
        cout << c <<endl;
        cout << a << endl;
        cout << b << endl;
    }
    else if (fm1 == b && minf == a){
        cout << a <<endl;
        cout << c << endl;
        cout << b << endl;
    }
    else if (fm1 == c && minf == a){
        cout << a <<endl;
        cout << b << endl;
        cout << c << endl;
    }
    else if (fm1 == c && minf == b){
        cout << b <<endl;
        cout << a << endl;
        cout << c << endl;
    }
    cout << endl;
    cout << a << endl << b << endl << c; 
    return 0;
}
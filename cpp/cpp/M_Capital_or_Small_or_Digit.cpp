#include<bits/stdc++.h>
using namespace std;
int main(){
    char x;
    cin >> x;
    int a = x;
    if(48 <= a && a <= 57){
        cout << "IS DIGIT";
    }
    else if(65<= a && a <= 90){
        cout << "ALPHA" << endl << "IS CAPITAL";
    }
    else{
        cout << "ALPHA" << endl << "IS SMALL";
    
    }
    return 0;
}
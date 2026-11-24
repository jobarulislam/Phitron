#include<bits/stdc++.h>
using namespace std;
int main(){
    int * a = new int[5];
    for(int i =0; i<5;i++){
        cin >> a[i];
    }
    int n;
    cin >> n;
    int * b = new int[n];
    for(int i = 0; i<5;i++){
        b[i] = a[i];
    }
    for(int i = 5;i<n;i++){
        cin >> b[i];
    }
    delete[] a;

    for(int i = 0; i<n;i++){
        cout << b[i] << " ";
    }
    return 0;
}

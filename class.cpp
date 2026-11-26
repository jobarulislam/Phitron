#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
char name[100];
int roll;
double gpa;

};
int main(){

    Student a ,b ;
    cin.getline(a.name,100);
    cin>> a.roll >> a.gpa; 
    cin.ignore();
    cin.getline(b.name,100);
    cin>> b.roll >> b.gpa;
    cout << a.name <<" " <<a.roll << " " <<fixed << setprecision(2) << a.gpa <<endl;
    cout << b.name <<" " <<b.roll << " " <<fixed << setprecision(2) << b.gpa <<endl;
    return 0;
}
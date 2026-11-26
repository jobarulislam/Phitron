#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
int cls;
int roll;
double gpa;
Student(int cls , int roll , double gpa){
    this->cls = cls;
    this->roll = roll;
    this->gpa = gpa;
}

};
int main(){
    int r ;
    int c;
    double g;
    cin >> r >> c >> g;
    Student a(c , r ,g ) ;
    
    cout << a.cls <<" " <<a.roll << " " <<fixed << setprecision(2) << a.gpa <<endl;
    return 0;
}
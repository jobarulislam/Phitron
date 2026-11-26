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
Student* fun(){
    Student* korim= new Student(4, 5, 5.00);
    return korim ;
}
int main(){
   
    Student* obj = fun();
    cout << obj->cls <<" " <<obj->roll << " " <<fixed << setprecision(2) << obj->gpa <<endl;
    return 0;
}
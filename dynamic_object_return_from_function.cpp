#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;
 //constructor->1. constructor class er vitrei take,2. er return type thake na,3.er nam hy exactly class er nam e
    Student(int roll, int cls, double gpa) // diff perameter na dile must "this" use kora lagbe, other wise na krleu prb nai
    {
        (*this).roll=roll;
        (*this).cls =cls;
        (*this).gpa= gpa;

    } 

};

Student* fun()
{
   Student* karim= new Student(2,5,5.00);
//    Student* p= &karim;
   return karim;
    
}

int main()
{
    // Student Rahim(45,5,3.3);
    Student* p= fun(); //static obj

//    cout<< Rahim.roll << " " << Rahim.cls << " " << Rahim.gpa << endl;
   cout<< p->roll << " " << p->cls << " " << p->gpa << endl;

}
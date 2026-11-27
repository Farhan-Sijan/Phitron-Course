#include<bits/stdc++.h>
using namespace std;


class Student{

    public :

    int roll;

    int cls;
    double gpa;

    Student(int r,int c,double gpa)
    {
       roll=r;
       cls=c;
       this->gpa=gpa;
    }

};

int main()
{
   Student sijan(43,4,3.2);


   cout<<sijan.roll<<" "<<sijan.cls<<" "<<sijan.gpa<<endl;

}

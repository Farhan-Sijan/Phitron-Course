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

    Student fun()
    {
         Student sijan(43,4,3.2);
         return sijan;
    }
    

int main()
{
   Student obj=fun();


   cout<<obj.roll<<" "<<obj.cls<<" "<<obj.gpa<<endl;

}

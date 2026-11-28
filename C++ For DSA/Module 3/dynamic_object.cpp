#include<bits/stdc++.h>
using namespace std;


class Student{

    public :

    int roll;

    int cls;
    double gpa;

    Student(int roll,int cls,double gpa)
    {
       this->roll=roll;
       this->cls=cls;
       this->gpa=gpa;
    }

};

    Student* fun()
    {
        Student* farhan=new Student(10,5,1.2);
         return farhan;
    }
    

int main()
{
  
  Student* p=fun();
   

 
    cout<<p->roll<<" "<<p->cls<<" "<<p->gpa<<endl;


}

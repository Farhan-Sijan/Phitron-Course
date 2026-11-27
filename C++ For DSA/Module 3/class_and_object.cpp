#include<bits/stdc++.h>
using namespace std;

class Student
{ 
     public :
     char name[100];
     int roll;
     double gpa;

};

int main()
{
    Student a,b;

    cin.getline(a.name,100);

    cin>>a.roll>>a.gpa;
    cin.ignore();

 cin.getline(b.name,100);

    cin>>b.roll>>b.gpa;




//    a.roll=10;
//    a.gpa=4.5;
//    char temp[100]="sijan";

//    strcpy(a.name,temp);

   cout<<a.name<<" "<<a.roll<<" "<<a.gpa<<endl;
   cout<<b.name<<" "<<b.roll<<" "<<b.gpa<<endl;

}


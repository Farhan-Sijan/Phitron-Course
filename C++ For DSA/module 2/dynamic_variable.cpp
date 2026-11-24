#include<bits/stdc++.h>
using namespace std;

int* p;


void fun()
{
   int *x=new int;
   *x=10;
   p=x;
   cout<<"fun : "<<*p<<endl;
}
int main()
{

    fun();
 cout<<"main : "<<*p<<endl;



    // int x =10;

    // int *p =new int;

    // *p=100;

    // cout<<*p<<endl;
}
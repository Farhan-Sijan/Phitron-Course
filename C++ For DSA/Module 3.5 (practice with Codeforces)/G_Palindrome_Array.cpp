#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;

    cin>>x;
    
    int a[x];

    int flag=0;

    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
   
    for(int i=0,j=x-1;i<j;i++,j--)
    {
         if(a[i]!=a[j])
         {
            flag=0;
            break;
         }

         else{
                flag=1;  
         }
    }
  
     if(flag==1)
     {
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
    
}
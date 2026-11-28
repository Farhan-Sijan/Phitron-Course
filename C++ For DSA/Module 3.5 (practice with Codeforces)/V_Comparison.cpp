#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    char s;

    cin>>m>>s>>n;

    if(m>n && s=='>')
    {
        cout<<"Right"<<endl;
    }
    else if(m<n && s=='<')
    {
          cout<<"Right"<<endl;
    }

     else if(m==n && s=='=')
    {
        cout<<"Right"<<endl;
    }

    else{
        cout<<"Wrong"<<endl;
    }
}
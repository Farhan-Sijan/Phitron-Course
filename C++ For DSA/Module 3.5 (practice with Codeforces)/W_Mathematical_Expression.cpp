#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,c;
    char s,q;

    cin>>m>>s>>n>>q>>c;

    if(m+n==c && s=='+'&& q=='=')
    {
        cout<<"Yes"<<endl;
    }
    else if(m-n==c && s=='-'&& q=='=')
    {
          cout<<"Yes"<<endl;
    }

     else if(m*n==c && s=='*'&& q=='=')
    {
        cout<<"Yes"<<endl;
    }
else{
   if(m+n!=c && s=='+'&& q=='=')
   {
     cout<<m+n<<endl;
   }

   else if(m-n!=c && s=='-'&& q=='=')
   {
    cout<<m-n<<endl;
   }

    else if(m*n!=c && s=='*'&& q=='=')
   {
    cout<<m*n<<endl;
   }

   else{
    
   }
}
    
}
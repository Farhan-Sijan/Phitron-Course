#include<stdio.h>
int main()
{
    long long  t,m,a,b,c;
    scanf("%lld",&t);

   for(int i=0;i<t;i++)
   {
     scanf("%lld %lld %lld %lld",&m,&a,&b,&c);

     long long mul=a*b*c;
     if(m%mul==0)
     {
        long long ans=m/mul;
        printf("%lld\n",ans);
     }
     else{
        printf("-1\n");
     }
    
    }
}
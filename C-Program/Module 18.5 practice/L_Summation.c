#include<stdio.h>

void summation(int a[],int n,int i,long long sum)
{
      
    if(i==n)
    {
         printf("%lld",sum);
        return;
    }
  

    sum=sum+a[i];
    summation(a,n,i+1,sum);

   
    
}
int main()
{

   long long sum=0;
    int n;
    scanf("%d",&n);
int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

   summation(a,n,0,sum);
}
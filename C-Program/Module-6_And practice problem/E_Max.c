#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);

 int max=0;
int x;
 for(int i=1;i<=n;i++)
{
   scanf("%d",&x);
   if(max<x)
   {
    max=x;
   }
}

printf("%d",max);

    
 }
    


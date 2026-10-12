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

 //alternative way for negative number 


   //#include<limits.h> 

// int main()
// {
//  int n;
//  scanf("%d",&n);

//  int max=INT_MIN;
// int x;
//  for(int i=1;i<=n;i++)
// {
//    scanf("%d",&x);
//    if(max<x)
//    {
//     max=x;
//    }
// }

// printf("%d",max);

    
//  }
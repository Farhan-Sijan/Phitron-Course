#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];

    int count=0;

    int co=0;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

     for(int i=0;i<n;i++)
    {
       if(a[i]%2==0)
       {
           count++;
          
       }

       else if(a[i]%2!=0 && a[i]%3==0)
       {
         co++;
         
       }
    }

     for(int i=0;i<n;i++)
    {
      
       if(a[i]%2==0 && a[i]%3==0)
       {
         count;

       }
    }

   printf("%d %d",count, co);

}
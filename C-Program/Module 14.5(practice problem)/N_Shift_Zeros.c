#include<stdio.h>

void  check(int n,int a[])
{
int zero=0;

      for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            printf("%d ",a[i]);
        }
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            zero++;
        }
    }
  
       for(int i=0;i<zero;i++)
    {
        printf("0 ");
    }
}

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    check(n,a);

    



}
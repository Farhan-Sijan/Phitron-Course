#include<stdio.h>
#include <limits.h>


void check(int n,int a[])
{
 int min=INT_MAX;
    int max=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }

    }

       for(int i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }

    }

    printf("%d %d",min,max);
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

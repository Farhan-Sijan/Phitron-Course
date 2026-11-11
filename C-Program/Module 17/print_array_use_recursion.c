#include<stdio.h>

void print_array(int arr[],int n,int i)
{
       if(i==n)
       {
        return;
       }

       printf("%d ",arr[i]);
       print_array(arr,n,i+1);
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

print_array(a,n,0);
}
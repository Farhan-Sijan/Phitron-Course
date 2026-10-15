#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];

    for(int i=1;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
int min=INT_MAX;
int idx;

for(int i=1;i<n;i++)
    {
       if(A[i]<min)
       {
         min=A[i];
         idx=i;

       }
    }

    printf("%d %d",min,idx);

}
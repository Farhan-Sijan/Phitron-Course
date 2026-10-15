#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
   int A[N];
   int sum=0;
   int sum1=0;

    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }


        for(int i=0;i<N;i++)
    {
        if(A[i]>0)
        {
          sum=sum+A[i];
        }
       
    }
   for(int i=0;i<N;i++)
    {
        if(A[i]<0)
        {
          sum1=sum1+A[i];
        }
       
    }

    
    printf("%d %d ",sum,sum1);
    
        
    

    


}
#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);

    for(int i=1;i<=N;i++)
    {
        if(N>0)
        {
            printf("%d ",i);
        }
    
    }
    
    for(int i=N;i<=0;i++)
    {
        if(N<0)
        {
            printf("%d ",i);
        }
    
    } 
    for(int i=0;i<=N;i++)
    {
        if(N==0)
        {
            printf("%d ",i);
        }
    
    }


}
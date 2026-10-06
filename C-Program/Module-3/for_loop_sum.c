#include<stdio.h>
int main()
{
    int n;
      int sum=0;
    printf("ENnter a number : ");
    scanf("%d",&n);

  
    for(int i=1;i<=n; i++ )
    {
        sum=sum+i;

    }

    printf("%d total sum is \n",sum);
    
}
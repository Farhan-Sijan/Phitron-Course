#include<stdio.h>

void rec(int n)
{
   if(n==0)
   {
    
    return;
   }

   rec(n/10);
   int last=n%10;
   printf("%d ",last);
  
}
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        if(x==0)
        {
  printf("0");
        }
        rec(x);
      
         printf("\n");

    }
    

    
}
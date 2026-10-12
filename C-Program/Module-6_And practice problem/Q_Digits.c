#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
int x;
 for(int i=1;i<=n;i++)
 {
    scanf("%d",&x);

  do{
 
        printf("%d ",x%10);
        x=x/10;
    } while(x!=0);

    printf("\n");

  

   
   
   
      
 }
}
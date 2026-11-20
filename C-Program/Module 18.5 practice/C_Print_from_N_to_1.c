#include<stdio.h>

void print_number(int i,int n)
{
   

   if(i<=0)
   {
    return;
   }
   if(i==1)
   {
    printf("%d",i);
    return;
   }
   printf("%d ",i);
   
   print_number(i-1,n);
   
   
}

int main()
{
    int i,n;

   

    scanf("%d",&n);

      i=n;
    print_number(i,n);
}
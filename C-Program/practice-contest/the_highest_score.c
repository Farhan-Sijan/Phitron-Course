#include<stdio.h>
#include<limits.h>

int main()
{
    int A;
    

    scanf("%d",&A);

    int b[A];

   int max=INT_MIN;
     
     for(int i=0;i<A;i++)
{
   scanf("%d",&b[i]);
}
 

    for(int i=0;i<A;i++)
{
   if(b[i]>max)
   {
    max=b[i];
    
   }
}

printf("%d",max);


}
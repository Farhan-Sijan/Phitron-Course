#include<stdio.h>
int main()
{
    int n;
   
    scanf("%d",&n);
 int count=1;
 int space=n-1;

    for(int i=0;i<n;i++)
    {
        
     for(int i=0;i<space;i++)
     {

      printf(" ");
    }

    if(i%2==0)
    {
    for(int j=0;j<count;j++)
    {
       
            printf("#");
    }

    }

    else
    {
         for(int j=0;j<count;j++)
    {
       
            printf("-");
    }
    }

 
       
        printf("\n");

    
        count=count+2;
        space--;
    }


    int count1=count-4;
 int space1=1;

    for(int i=n-2;i>=0;i--)
    {
        
     for(int i=0;i<space1;i++)
     {

      printf(" ");
    }

    if(i%2==0)
    {
    for(int j=0;j<count1;j++)
    {
       
            printf("#");
    }

    }

    else
    {
         for(int j=0;j<count1;j++)
    {
       
            printf("-");
    }
    }

 
       
        printf("\n");

    
        count1=count1-2;
        space1++;
    }

    
}
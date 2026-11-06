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

     for(int j=0;j<count;j++)
    {
        printf("*");
    }
       
        printf("\n");
        count=count+2;
        space--;
    }



    int count1=count;
 int space1=0;

    for(int i=0;i<n;i++)
    {

     for(int i=0;i<space1;i++)
     {
      printf(" ");
    }

     for(int j=2;j<count1;j++)
    {
        printf("*");
    }
       
        printf("\n");
        count1=count1-2;
        space1++;
    }

    
}
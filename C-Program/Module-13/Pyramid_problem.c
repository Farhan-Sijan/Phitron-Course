#include<stdio.h>
int main()
{
    int n,star=1;
    scanf("%d",&n);
    int space=n-1;
    for(int i=0;i<=n;i++)
    {

        for(int i=1;i<=space;i++)
        {
         printf(" ");
        }
        for(int i=1;i<=star;i++)
        {
             printf("*");
        }
     printf("\n");   
     star=star+2;
     space--;
   
    }
}
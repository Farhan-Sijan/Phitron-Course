#include<stdio.h>
int main()
{
 int x;

 //if we want ,we can use for loop here

 //for(;scanf("%d",&x);)

 while(scanf("%d",&x))
 {
        if(x==1999)
        {
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
 }

 }
    


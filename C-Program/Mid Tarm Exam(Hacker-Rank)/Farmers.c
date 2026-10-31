#include<stdio.h>
int main()
{
    int t;

    int m1;
    int  m2;
    int  d;

    int  ex=0;

    int final=0;
   

   scanf("%d",&t);

   for(int i=0;i<t;i++)
   {
      scanf("%d %d %d",&m1,&m2,&d);
      ex=(m1*d)/(m1+m2);
      final=d-ex;
      
      
    printf("%d\n",final);
   }

  
        

   
   
    


}
#include<stdio.h>
int main()
{
    int  t;

    char s[10000];

    char a[10000];
   
    int count1=0;
    int count2=0;
    int count3=0;


     scanf("%d",&t);

     for(int i=0;i<t;i++)
     {
        scanf(" %s",&s);

        int len =strlen(s);

       

        for(int i=0;i<len;i++)
        {
  if(s[i]>='A' && s[i]<='Z')
        {
            count1++;
        }

        else if(s[i]>='a' && s[i]<='z')
        {
            count2++;
        }

         else if(s[i]>='0' && s[i]<='9')
        {
            count3++;
        }
       
     }
 printf("%d %d %d \n", count1, count2, count3);
      

      count1=0;
        count2=0;
        count3=0;
        }
 
      
       
     }

    
       

    

       
     


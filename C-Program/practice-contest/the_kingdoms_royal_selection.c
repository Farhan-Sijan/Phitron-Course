#include<stdio.h>
#include<limits.h>

int main()
{
  int a,i,p,e;

  scanf("%d %d %d %d",&a, &i, &p, &e);

  if(a>=21 && a<=35 && i>=80 && i<=100 && p>=70 && p<=100 && e>=2 && e<=50)
  {
    printf("Selected");

   
  }

   else if (e>=0 && e<=50 && a>=30 && a<=35 && i>=95 && i<=100  && p>=90 && p<=100)
  {
   
  
       printf("Selected");
    
  }

  else{
     printf("Rejected");
  }


}
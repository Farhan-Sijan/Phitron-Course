#include <stdio.h>
int main()
{
    int tk;
    printf("Entter your amount : ");
    scanf("%d",&tk);
   if(tk>=100)
   {
    printf("I will buy a Burger\n");
   }
   else if(tk>=50)
   {
    printf("I will buy a hot dog\n");
   }
   else{
    printf("I will not buy anything\n");

   }
}

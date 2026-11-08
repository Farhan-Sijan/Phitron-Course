#include<stdio.h>

 int is_palindrome(char s[])
 {
      int len=strlen(s);
     for(int i=0,j=len-1;i<j;i++,j--)
     {
        if(s[i]!=s[j])
        {
            return 0;

        }
            
        
     }

   return 1;
     
 }

int main()
{
    char s[1005];

    scanf("%s",&s);

   int ans= is_palindrome(s);

  if(ans==1)
  {
    printf("Palindrome");
   
  }
  else if(ans==0)
  {
    printf("Not Palindrome");
  }

 
  


}
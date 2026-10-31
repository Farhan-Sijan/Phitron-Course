#include<stdio.h>
#include<string.h>
int main()
{
    char s[100005];
    scanf("%s",&s);
    int len=strlen(s);

    int count=0;
 

  for(int i=0;i<len;i++)
  {

 if(s[i]=='a')
 {
    count;
  }
  else if(s[i]=='e')
  {
     count;
  }
  else if(s[i]=='i')
  {
     count;
  }
  else if(s[i]=='o')
  {
     count;
  }
  else if(s[i]=='u')
  {
     count;
  }
  else{
    count++;
  }


  }

  printf("%d",count);
    
}
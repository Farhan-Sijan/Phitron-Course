#include<stdio.h>
int main()
{
    char  s[1000];

    scanf("%s",s);

    int len=strlen(s);

   
    int fre[26]={0};

     for(int i=0;i<len;i++)
    {

        fre[s[i]-97]++;
    }

      for(int i=0;i<26;i++)
    {
        if(fre[i]==0)
        {
            continue;
        }
        else{
  printf("%c - %d\n", 97+i,fre[i]);
    }
        }
      
}
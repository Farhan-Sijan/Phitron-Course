#include<stdio.h>
int main()
{
  int x;
  scanf("%d",&x);

  int n=x/10;
  int y=x%10;

  if(y%n==0 || n%y==0)
  {
    printf("YES");
  }
  else{
    printf("NO");
  }
}
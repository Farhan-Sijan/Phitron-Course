#include<stdio.h>

long long fact(int n)
{
    if(n==1)
    {
        return 1;
    }
      long long total=fact(n-1);
      return total*n;
}

int main()
{
    int n;
    scanf("%d",&n);

  long long  ans=  fact(n);
  printf("%lld",ans);
}
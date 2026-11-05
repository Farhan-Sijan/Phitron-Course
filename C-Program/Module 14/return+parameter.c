#include<stdio.h>

 int sum(int a ,int b)
 {
        int ans=a+b;
        return ans;
 }

  int sub(int a ,int b)
 {
        int ans=a-b;
        return ans;
 }

int main()
{
    int add=sum(4,5);

    int add2=sum(10,20);

    int sub2=sub(3,2);

   printf("%d\n%d\n%d",add,add2,sub2);
  
}
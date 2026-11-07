#include<stdio.h>

void fun(int* ptr)
{
    *ptr = 20;
    // printf("%d\n",x);
}
int main()
{
  int x=10;
  fun(&x);
  printf("%d\n",x);

}
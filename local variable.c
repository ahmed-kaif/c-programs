#include<stdio.h>

void func1(void)
{
    int x;
    x=10;
    printf("%i\n",x);
}
void func2(void)
{
    int x;
    x = -100;
    printf("%i\n",x);
}
void main(void)
{
  func1();
  func2();
}

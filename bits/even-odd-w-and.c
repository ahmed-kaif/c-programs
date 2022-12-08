#include <stdio.h>
int main(void)
{
  int num1;
  printf("Enter any base number: ");
  scanf("%i", &num1);

  if(num1 & 1)
  {
    printf("%i Odd\n", num1);
  }
  else{
    printf("%i Even\n", num1);
  }
}

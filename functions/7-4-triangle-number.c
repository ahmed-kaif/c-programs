#include<stdio.h>

int triangularNumber(int n)
{
    int i,triangulaNumber=0;
    for(i=1;i<=n;i++)
        triangulaNumber += i;

    return triangulaNumber;
}
int main(void)
{
    int j;
      printf("Triangular number of 10 is %i\n",triangularNumber(10));
       printf("Triangular number of 20 is %i\n",triangularNumber(20));
       printf("Triangular number of 55 is %i\n",triangularNumber(55));

    for(j=1;j<=10;j++)
      printf("Triangular number of %2i is %i\n",j,triangularNumber(j));

    return 0 ;
}

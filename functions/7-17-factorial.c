#include<stdio.h>

int main(void)
{
    unsigned int j;
    unsigned long long int factorial(unsigned int n);

    for(j=0;j<21;++j)
      printf("%2u! = %llu\n",j,factorial(j));


    return 0;

}

unsigned long long int factorial(  unsigned int n)
{
    unsigned long long int result;

    if(n==0)
        result = 1;
    else
        result = n*factorial(n-1);

    return result;
}

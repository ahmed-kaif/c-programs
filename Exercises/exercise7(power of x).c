#include<stdio.h>
long int x_to_the_n(int x, int n)
{
    long int result;
    if(n==0)
        result = 1;
    else
        result = x * x_to_the_n(x,n-1);

    return result;
}

int main(void)
{
    printf("3^4 = %li\n",x_to_the_n(3,4));
    printf("9^9 = %li\n",x_to_the_n(9,9));
    printf("7^0 = %li\n",x_to_the_n(7,0));
    printf("5^5 = %li\n",x_to_the_n(5,5));

    return 0;
}

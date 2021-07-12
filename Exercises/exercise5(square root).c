#include<stdio.h>

/**float absoluteValue(float x)
{
    if(x<0) x = -x ;
    return x;
}**/

float squareRoot(float x)
{
    float guess = 1;

if (x<0)
 {
     printf("Negative argument to squareRoot.\n");
     return -1.0;
 }

 while (x/(guess*guess) >= 1.0)
    {guess = (x/guess+guess)/2.0;
    printf("guess = %f\n",guess);}

   return guess;
}
int main(void)
{
    printf("%f\n",squareRoot(87));
    printf("%f\n",squareRoot(625)); ///The epsilon is smaller precision is higher...
    printf("%f\n",squareRoot(2));

    return 0;
}


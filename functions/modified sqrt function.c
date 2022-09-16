#include<stdio.h>

float absoluteValue(float x)
{
    if(x<0) x = -x ;
    return x;
}

float squareRoot(float x,float epsilon)
{
    float guess = 1;

if (x<0)
 {
     printf("Negative argument to squareRoot.\n");
     return -1.0;
 }

 while (absoluteValue((guess*guess-x))>= epsilon)
    {guess = (x/guess+guess)/2.0;
    printf("guess = %f\n",guess);}

   return guess;
}
int main(void)
{
    printf("%f\n",squareRoot(50,.00001));
    printf("%f\n",squareRoot(1008,.0001)); ///The epsilon is smaller precision is higher...
    printf("%f\n",squareRoot(5,.00001));

    return 0;
}

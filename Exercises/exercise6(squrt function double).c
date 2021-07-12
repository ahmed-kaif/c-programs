#include<stdio.h>

float absoluteValue(float x)
{
    if(x<0)
        x = -x;
    return x;
}

double squareRoot(double x)
{
    const double epsilon = .0000000001;
    double guess = 1.0;

    if(x<0)
        printf("imaginary root.\n");

    while(absoluteValue(guess*guess - x)>= epsilon)
        {guess = (x/guess+guess)/2.0;
        printf("guess = %lf\n",guess);
        }

    return guess;
}

int main(void)
{
    printf("square root of 4321557 is %lf\n",squareRoot(4321557));
    printf("square root of 625 is %lf\n",squareRoot(625));
    printf("square root of 87 is %lf\n",squareRoot(87));
    printf("square root of 2 is %lf\n",squareRoot(2));
    return 0;
}

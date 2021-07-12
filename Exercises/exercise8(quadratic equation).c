#include<stdio.h>
float absoluteValue(float x)
{
    if(x<0)
        x = -x;
    return x;
}

double squareRoot(double x)
{
    const double epsilon = .000000001;
    double guess = 1.0;

    if(x<0)
        printf("imaginary root.\n");

    while(absoluteValue(guess*guess - x)>= epsilon)
        {guess = (x/guess+guess)/2.0;
        ///printf("guess = %lf\n",guess);
        }

    return guess;
}
void quadraticEquation(void)
{
    int a,b,c;
    float x1,x2;
    printf("a = ");
    scanf("%i",&a);
                       printf("b = ");
                       scanf("%i",&b);
    printf("c = ");
    scanf("%i",&c);

    if((b*b-4*a*c)<0)
        printf("The roots are imaginary.\n");

    else{
        x1 = (-b+squareRoot(b*b-4*a*c))/2.0;
        x2 = (-b-squareRoot(b*b-4*a*c))/2.0;

          printf("x1 = %f\n",x1);
          printf("x2 = %f\n",x2);

             }


}

int main(void)
{
    quadraticEquation();

     return 0;
}

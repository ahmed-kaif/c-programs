#include<stdio.h>
float absoluteValue(float x)
{
    if(x<0) x = -x ;
    return x;
}

int main(void)
{
    int input,x1,x2,x3,x4,y1,y2,y3,y4;
    float area;

    printf("Num of sides: ");
    scanf("%i",&input);

    if(input==3)
     {
       printf("x1: ");
       scanf("%i",&x1);

       printf("y1: ");
       scanf("%i",&y1);

       printf("x2: ");
       scanf("%i",&x2);

       printf("y2: ");
       scanf("%i",&y2);

       printf("x3: ");
       scanf("%i",&x3);

       printf("y3: ");
       scanf("%i",&y3);
                                     area = ((x1*y2+x2*y3+x3*y1)-(y1*x2+y2*x3+y3*x1))/2.0;

                                     printf("Area = %.2f\n",absoluteValue(area));
    }
   else if(input==4)
     {
       printf("x1: ");
       scanf("%i",&x1);

       printf("y1: ");
       scanf("%i",&y1);

       printf("x2: ");
       scanf("%i",&x2);

       printf("y2: ");
       scanf("%i",&y2);

       printf("x3: ");
       scanf("%i",&x3);

       printf("y3: ");
       scanf("%i",&y3);

       printf("x4: ");
       scanf("%i",&x4);

       printf("y4: ");
       scanf("%i",&y4);
                                        area = ((x1*y2+x2*y3+x3*y4+x4*y1)-(y1*x2+y2*x3+y3*x4+y4*x1))/2.0;

                                        printf("Area = %.2f\n",absoluteValue(area));
    }

    return 0;
}

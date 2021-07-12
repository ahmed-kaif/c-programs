#include<stdio.h>
int lcm(int u, int v)
{
    int lcm;
    lcm = (u*v)/gcd(u,v);
             /// a*b = lcm(a,b) * gcd(a,b)

     return lcm;
}
int gcd(int x, int y)
{
    int temp;
    while(y!=0)
    {
        temp = x%y;
        x=y;
        y=temp;
    }

    return x;
}

int main(void)
{
    int lcm(int u, int v);

        int a,b;
        printf("\aa = ");
        scanf("%i",&a);
                printf("\ab = ");
                scanf("%i",&b);

    printf("Lcm of %i & %i is %i\n",a,b,lcm(a,b));

    return 0;
}

#include<stdio.h>
int arraySum(int array[], int i)
{
    int j,sum = 0;
    for(j=0;j<i;++j)
        sum += array[j];

    return sum;
}
int main(void)
{
    int grades[4]={1,2,2,5};
    printf("Array sum is %i\n",arraySum(grades,4));

    return 0;
}

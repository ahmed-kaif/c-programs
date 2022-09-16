#include<stdio.h>
int main(void)
{
    struct date
    {
        int day;
        int month;
        int year;
    };
    struct date today;
    today.month = 5;
    today.day = 7;
    today.year = 2018;

    printf("Today's Date %i/%i/%.2i.\n",today.month,today.day,today.year%100);

    return 0;
}

// exercise 2: Program to Calculate Elapsed Day between two dates
#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

int N(struct Date d)
{
    int result;

    if (d.month <= 2)
    {
        d.year = d.year - 1;
        d.month = d.month + 13;
    }
    else
    {
        d.year = d.year;
        d.month = d.month + 1;
    }

    result = ((1461 * d.year) / 4) + (153 * d.month / 5) + d.day;  // this formula is applicable for any dates after March 1, 1900

    return result;
}

int elapsed_days(struct Date d1, struct Date d2)
{

    int elapsedDays;

    elapsedDays = N(d2) - N(d1);

    if ((d1.month >= 3 && d1.year >= 1700) && (d2.month < 3 && d2.year <= 1800))// dates between March 1, 1700 and February 28, 1800
    {
        // add 2 to elapsed Days
        elapsedDays = elapsedDays + 2;
    }
    else if ((d1.month >= 3 && d1.year >= 1800) && (d2.month < 3 && d2.year <= 1900)) // dates between March 1, 1800 and February 28,1900
    {
        // add 1 to elapsed Days
        elapsedDays = elapsedDays + 1;
    }

    return elapsedDays;
}

int main()
{

    int elapsed_days(struct Date d1, struct Date d2);

    struct Date date1, date2;

    printf("Enter Date1 (dd/mm/yyyy): ");
    scanf("%i/%i/%i",&date1.day, &date1.month, &date1.year);
    printf("Enter Date2 (dd/mm/yyyy): ");
    scanf("%i/%i/%i",&date2.day, &date2.month, &date2.year);

    printf("Number of Elapsed Days = %i\n", elapsed_days(date1,date2));

    return 0;

}

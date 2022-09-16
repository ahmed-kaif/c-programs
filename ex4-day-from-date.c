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
    int n;
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

    n =( ( (1461 * d.year) / 4 ) + (153 * d.month / 5) + d.day) - 621049;
    result = n % 7;
    // this formula is applicable for any dates after March 1, 1900
    // && Returns a number 0 - 6 correspoding the day of the week starting from sunday

    return result;
}

int main()
{
    struct Date date;
    printf("Enter a date (dd/m/yyyy): ");
    scanf("%i/%i/%i", &date.day, &date.month, &date.year);

    int result = N(date);

    printf("%i/%i/%i the Day was a ", date.day, date.month, date.year);
    if (result == 0)
    {
        printf("Sunday.");
    }
    else if (result == 1)
    {
        printf("Monday.");
    }
    else if (result == 2)
    {
        printf("Tuesday.");
    }
    else if (result == 3)
    {
        printf("Wednesday.");
    }
    else if (result == 4)
    {
        printf("Thursday.");
    }
    else if (result == 5)
    {
        printf("Friday.");
    }
    else
    {
        printf("Saturday.");
    }

    printf("%i", 1830%60);

}

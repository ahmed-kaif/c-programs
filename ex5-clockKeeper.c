#include <stdio.h>
#include <stdbool.h>

struct date
{
    int day;
    int month;
    int year;
};

struct time
{
    int hours;
    int minutes;
    int seconds;
};

struct DateAndTime
{
    struct date sdate;
    struct time stime;
};

_Bool isMidnight = false;

struct date dateUpdate (struct date d)
{
    struct date tomorrow;
    int numberOfDays(struct date d);

    if (d.day != numberOfDays(d))   // not the last date of the month
    {
        tomorrow = (struct date)
        {
            .day= d.day + 1, .month=d.month, .year=d.year
        }; //compound literals & (.member = value type struct init)

        //tomorrow.day = d.day + 1;
        //tomorrow.month = d.month;
        //tomorrow.year = d.year;
    }
    else if (d.month == 12)   // end of year
    {
        tomorrow = (struct date)
        {
            .day = 1, .month = 1, .year = d.year + 1
        };

        //tomorrow.day = 1;
        //tomorrow.month = 1;
        //tomorrow.year = d.year + 1;
    }
    else   // end of month
    {
        tomorrow = (struct date)
        {
            .day=1, .month=d.month+1, .year=d.year
        };

        //tomorrow.day = 1;
        //tomorrow.month = d.month + 1;
        //tomorrow.year = d.year;
    }


    return tomorrow;
}

int numberOfDays (struct date d)
{
    int days;
    bool isLeapYear (struct date d);
    const int daysPerMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    if(isLeapYear(d) == true && d.month == 2)   // leap year & february month
    {
        days = 29;
    }
    else days = daysPerMonth[d.month - 1];

    return days;
}

bool isLeapYear (struct date d)
{
    if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0) return true; // leap Year
    else return false; // not leap Year
}
// End of DateUpdate Function

struct time timeUpdate(struct time t)
{
    ++t.seconds;
    if(t.seconds == 60) {
        t.seconds = 0;
        ++t.minutes;

        if(t.minutes == 60) {
        t.minutes = 0;
        ++t.hours;

        if(t.hours == 24) {
            t.hours = 0;
            isMidnight = true;
        }
        }
    }
    return t;
}


struct DateAndTime clockKeeper(struct DateAndTime dt)
{
    dt.stime = timeUpdate(dt.stime);
    if(isMidnight) {
    dt.sdate = dateUpdate(dt.sdate);
    }
    return dt; // returns a DateAndTime Structure
}

int main()
{

    struct DateAndTime prevEvent, event;
	prevEvent = (struct DateAndTime) { {.day=28, .month=2, .year=2000} , {.hours=23, .minutes=59, .seconds= 59} };
    event = clockKeeper(prevEvent);

	printf("Updated Date & Time is: %i/%i/%i at %.2i:%.2i:%.2i\n",
	event.sdate.day,
	event.sdate.month,
	event.sdate.year,
	event.stime.hours,
	event.stime.minutes, event.stime.seconds);

	return 0;

}

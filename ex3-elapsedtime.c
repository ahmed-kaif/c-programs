#include <stdio.h>
#include <math.h>

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

int timeToSeconds(struct Time t)
{
    if(t.hours == 0)
    {
        t.hours = 24;
    }
    int total = (t.hours*3600) + (t.minutes*60)+ t.seconds;
    return total;
}

struct Time elapsed_time(struct Time t1, struct Time t2)
{
    struct Time elapsedTime;
    int elapsedTimeInSeconds = abs( timeToSeconds(t2) - timeToSeconds(t1) );

    elapsedTime.hours = elapsedTimeInSeconds / 3600;
    elapsedTime.minutes = (elapsedTimeInSeconds % 3600) / 60;
    elapsedTime.seconds = (elapsedTimeInSeconds % 3600) % 60;

    return elapsedTime;
}

int main()
{

    struct Time time1, time2, et;
    printf("Enter Time1 (hh:mm:ss): ");
    scanf("%i:%i:%i", &time1.hours,&time1.minutes, &time1.seconds);
    printf("Enter Time2 (hh:mm:ss): ");
    scanf("%i:%i:%i", &time2.hours, &time2.minutes, &time2.seconds);
    et = elapsed_time(time1,time2);

    printf("Elapsed Time: %i hours %i minutes %i seconds\n", et.hours, et.minutes, et.seconds);

    return 0;
}

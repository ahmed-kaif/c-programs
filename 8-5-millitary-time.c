#include<stdio.h>
struct time
{
    int hour;
    int minutes;
    int seconds;
};

struct time timeUpdate(struct time t) ///function to update time by 1 second;
{
     ++t.seconds;
     if(t.seconds == 60){
        t.seconds = 0;
        ++t.minutes;

        if(t.minutes == 60){
            t.minutes = 0;
            ++t.hour;

            if(t.hour == 24)
                t.hour = 0;
        }
     }

     return t;

};
int main(void)
{
    struct time timeUpdate(struct time t);

    struct time currentTime,nextTime;
    printf("Enter current time(hh:mm:ss):");
    scanf("%i:%i:%i",&currentTime.hour,&currentTime.minutes,&currentTime.seconds);

    nextTime = timeUpdate(currentTime);

    printf("Updated time is %.2i:%.2i:%.2i\n",nextTime.hour,nextTime.minutes,nextTime.seconds);

    return 0;
}

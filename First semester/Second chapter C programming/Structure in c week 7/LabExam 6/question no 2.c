#include<stdio.h>

struct Time { ///Struct Fanction.
    int hour;
    int minutes;
};

struct Interval {
    struct Time start;
    struct Time end;
};

int main(){
    struct Interval day;
    day.start.hour = 5;
    day.start.minutes = 30;

    day.end.hour = 10;
    day.end.minutes = 15;
    printf("Start time: %d:%d\n", day.start.hour, day.start.minutes);///Print Start vlaue.
    printf("End Time: %d:%d\n",day.end.hour, day.end.minutes);      ///print End value.
    return 0;
}

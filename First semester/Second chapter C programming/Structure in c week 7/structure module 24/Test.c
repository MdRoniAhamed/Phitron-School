#include<stdio.h>

struct Date
{
    int day,month,year;
};
int Months[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main()
{
    struct Date start;

    int day;
    printf("Start date: ");
    scanf("%d %d %d",&start.day,&start.month,&start.year);
    printf("How many day:");
    scanf("%d",&day);
    struct Date nextday = start;

    while(day !=0){
    if(nextday.day < Months[nextday.month-1]){
        nextday.day++;
    }
    else if(nextday.month != 12){
        nextday.day = 1;
        nextday.month++;
    }
    else{
        nextday.day = 1;
        nextday.month = 1;
        nextday.year++;
    }
    day--;
    printf("Next Date: %d-%d-%d\n",nextday.day,nextday.month,nextday.year);
    }

}

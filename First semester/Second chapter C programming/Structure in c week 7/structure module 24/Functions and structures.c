#include<stdio.h>
struct Date
{
    int day,month,year;
};
int Months[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
struct Date getNextDate(struct Date date)
{
    struct Date nextdate = date;
    if(nextdate.day < Months[nextdate.month-1]){
        nextdate.day++;
    }
    else if(nextdate.month < 12){
        nextdate.day = 1;
        nextdate.month++;
    }
    else{
        nextdate.day = 1;
        nextdate.month = 1;
        nextdate.year++;
    }
    return nextdate;
}
void printDate(struct Date date) {
    printf("Next Date: %d-%d-%d\n",date.day,date.month,date.year);
}
int main()
{
    struct Date start;
    int day;
    printf("Start date: ");
    scanf("%d %d %d",&start.day,&start.month,&start.year);
    printf("How many day:");
    scanf("%d",&day);
    struct Date current = start;
    for( int i = 0; i < day; i++){
        current = getNextDate(current);
        printf("%dth day: ",i+1);
        printDate(current);
    }
    return 0;

}

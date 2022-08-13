#include<stdio.h>

struct Time     ///structure declare.
{
    int hour;
    int minute;
    int second;
};
void printTime(struct Time time) {
    printf("Time: %d:%d:%d\n",time.hour,time.minute,time.second);   ///print
}
int main()
{
    struct Time time={6,30,00};     ///Time store.
 //  scanf("%d %d %d",&time.hour,&time.minute,&time.second);
   time.hour +=12;                  ///Time 24 format.
   printTime(time);
}

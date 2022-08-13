#include<stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};
int main()
{
    struct Date today = { 28, 5, 2022};

    today = (struct Date ){1,1,2022};



    printf("%d-%d-%d",today.day,today.month,today.year);

}



#include<stdio.h>
struct Date {
    int day;
    int month;
    int year;
};

struct Student{
    char* name[100];
    int class;
    int roll;
    struct Date dob;
};
void printDate(struct Date date){
    printf("%d-%d-%d",date.day,date.month,date.year);
}
void printStudent(struct Student stu){
    printf("Name:%s\n",stu.name);
    printf("Class:%d\n",stu.class);
    printf("Roll:%d\n",stu.roll);
    printf("BOD:");
    printDate(stu.dob);
}
int main()
{
    struct Student stu ={
    .class = 9,
    .roll = 10,
    .dob={1,5,2005}
    };
    char name[100] ="Roni Ahamed";
    strcpy(stu.name,name);

    printStudent(stu);
}

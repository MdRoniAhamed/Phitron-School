#include<stdio.h>
struct Student
{
    char name[100];
    int roll;
    int marks;
    int last_marks[100];
};
int main()
{
    struct Student a={"Roni",.marks=5,.roll=90};
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a.last_marks[i]);
    }
    printf("Name-%s Roll-%d Mark-%d\n",a.name,a.roll,a.marks);
    for(int i=0;i<5;i++)
    {
        printf("%d ",a.last_marks[i]);
    }
    return 0;
}


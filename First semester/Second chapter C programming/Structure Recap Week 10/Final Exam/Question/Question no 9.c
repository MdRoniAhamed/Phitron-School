#include<stdio.h>

struct Student  ///Create Structure .
{
    int roll;
    int class;
    int marks;
};
int main()
{
    int  n;
    scanf("%d",&n);  ///Input all Students number .
    struct Student student[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        ///Input students data.
        scanf("%d %d %d",&student[i].roll,&student[i].class,&student[i].marks);
        sum+=student[i].marks;   ///Sum all student marks.
    }
    printf("Sum: %d \n",sum);  ///Print sum.
    return 0;
}


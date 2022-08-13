#include<stdio.h>
struct Student
{
    char name[100];
    int roll;
    int marks;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct Student hight={.marks=0};
    for(int i=0;i<n;i++)
    {
        struct Student a;
        scanf("%s %d %d",&a.name, &a.roll ,&a.marks);
        if(a.marks > hight.marks)
        {
            hight=a;
        }
    }
    printf("Highest Marks: Name-%s Roll-%d Mark-%d\n",hight.name,hight.roll,hight.marks);

    return 0;
}


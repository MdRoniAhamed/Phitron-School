#include<stdio.h>

struct Student{  ///structure declare .

    char name[100];
    int roll;
    int marks;
    };

void print_struct(struct Student a)
{
    printf("%s %d %d\n",a.name,a.roll,a.marks); ///print array structure.
}
void fun(struct Student a[])
{
    a[0].marks=100;
}

int main()
{
    struct Student a[3];  ///structure array declaration .
    for(int i=0; i<3;i++){
        scanf("%s %d %d",&a[i].name,&a[i].roll,&a[i].marks); ///input array structure.
    }
    fun(a);
    for(int i=0;i<3;i++){
        print_struct(a[i]); ///call array structure print.
    }
    return 0;
}


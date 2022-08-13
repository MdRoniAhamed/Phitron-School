#include<stdio.h>

struct Student
{
    char name[100];
    int id;
    int marks;
    int total;

};
int main()
{
    int n;
    scanf("%d",&n);
    struct Student student[n];
    for(int i = 0;i < n; i++){
        scanf("%s %d %d",&student[i].name,&student[i].id,&student[i].marks);
        int sum=0;
        for(int j=0;j<i;j++)
        {
            if(student[i].id==student[j].id)
            {
                sum += student[j].marks;
            }
        }
        int new_sum = student[i].marks+sum;
        student[i].total=new_sum;
    }
    for(int i=0;i<n;i++)
    {
        printf("%s %d %d %d\n",student[i].name,student[i].id,student[i].marks,student[i].total);
    }

    return 0;
}


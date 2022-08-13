#include<stdio.h>
#include<stdbool.h>
#include<string.h>
struct Students
{
    char name[100];
    int id;
    int marks;
};

struct Unique_Student
{
    char name[100];
    int id;
    int total;
};
int main()
{
    int size;
    scanf("%d",&size);
    struct Students students[size];
    struct Unique_Student unique_students[size];
    int k=0;
    for(int i = 0; i < size; i++)
    {
        scanf("%s %d %d",&students[i].name,&students[i].id,&students[i].marks);
        int found = false;
        for(int j=0; j<k; j++)
        {
            if(unique_students[j].id==students[i].id)
            {
                unique_students[j].total += students[i].marks;
                found = true;
            }

        }
        if(found == false)
        {
            strcpy(unique_students[k].name,students[i].name);
            unique_students[k].id=students[i].id;
            unique_students[k].total=students[i].marks;
            k++;
        }

    }
    for(int i = 0; i<k; i++)
    {
        printf("%s %d %d\n",unique_students[i].name,unique_students[i].id,unique_students[i].total);
    }
    return 0;
}


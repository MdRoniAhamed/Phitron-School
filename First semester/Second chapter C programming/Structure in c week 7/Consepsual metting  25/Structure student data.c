#include<stdio.h>

struct Student
{
    char name[100];
    int Roll;
    int Marks;
};
int main()
{
    int size;
    scanf("%d",&size);

    struct Student ar[size];
    for(int i=0;i<size;i++){
        scanf("%s %d %d",&ar[i].name,&ar[i].Roll,&ar[i].Marks);
    }
     for(int i=0 ;i<size;i++){
        printf("%s %d %d\n",ar[i].name,ar[i].Roll,ar[i].Marks);
     }

    return 0;

}


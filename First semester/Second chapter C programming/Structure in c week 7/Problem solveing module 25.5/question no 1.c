#include<stdio.h>
#include<string.h>
struct Date {
    int day;
    int month;
    int year;
};

struct Student{
    char* name[100];
    int roll;
    int class;
    struct Date dob;
};
void print(struct Student st){
    printf("\n");
    printf("Student Name: %s\n",st.name);
    printf("Class: %d\n",st.class);
    printf("Roll: %d\n",st.roll);
    printf("Date of Birth: %d-%d-%d\n",st.dob.day,st.dob.month,st.dob.year);
}
int main()
{
    struct Student st ={
    .class = 11,
    .dob={1,5,2005}
    };
    char name[201];
    printf("Enter first Name:");
    scanf("%s",&name);
    printf("Enter first Roll:");
    scanf("%d",&st.roll);
    strcpy(st.name,name);
    printf("\nFirst Information Show:");
    print(st);

    printf("\n\nEnter update Information:\n");
    printf("Enter Update Name:");
    scanf("%s",&name);
    strcpy(st.name,name);
    printf("Enter Update Roll:");
    scanf("%d",&st.roll);
    printf("\nUpdate Information Show:");
    print(st);

    return 0;
}

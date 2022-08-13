#include<stdio.h>
///Main Students Structure.
struct Student
{
    char name[100];
    int marks;
    int roll;
    char section;
    int whichClass;
};

/// Print value Function.
void print(struct Student s[],int i,int n)
{
    FILE * output_file = fopen("output.txt", "a");
    ///print value.
    if(n==1)
    {
      fprintf(output_file, "Highest value: %s %d %d %c %d\n",s[i].name,s[i].marks,s[i].roll,s[i].section,s[i].whichClass);
    }
    if(n==0){
        fprintf(output_file, "Lowest value: %s %d %d %c %d\n",s[i].name,s[i].marks,s[i].roll,s[i].section,s[i].whichClass);
    }
    fclose(output_file);
}
///Highest value Function .
void highest(struct Student s[],int n)
{
    int count=0;
    for(int i=0; i<n;i++)
    {
        if(s[i].marks>s[0].marks){
            count=i;
        }
    }
    //printf("Highest value => ");
    print(s,count,1);
}
void lowest(struct Student s[],int n) ///Lowest value function.
{
    int count=0;
    for(int i=0; i<n;i++)
    {
        if(s[i].marks<s[0].marks){
            count=i;
        }
    }
  //  printf("Lowest value = > ");
    print(s,count,0);
}
int main()
{
    FILE * input_file = fopen("input.txt", "r");

    int a;
    fscanf(input_file, "%d",&a); ///Structure size a .
    struct Student s[a];  /// students structure.
    for(int i=0;i<a;i++)
    {
        ///Input Students Data.
        fscanf(input_file, "%s %d %d %c %d",&s[i].name,&s[i].marks,&s[i].roll,&s[i].section,&s[i].whichClass);
    }
    highest(s,a); ///Call highest value function.
    lowest(s,a);  /// Call lowest value function.
    fclose(input_file);
    return 0;
}


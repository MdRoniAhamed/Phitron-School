#include<stdio.h>
#include<stdbool.h>
#include<string.h>

struct Students
{
    char name[100];
    int id;
    int marks;
};
struct Unique_ID
{
    char name[100];
    int ID;
    int total;
};
int main()
{
    FILE * inputFile = fopen("input.txt", "r");
    FILE * outputFile = fopen("output.txt", "w");
    if(inputFile==NULL)
    {
        fprintf(outputFile, "NOT FOUND INPUT FILE.\n");
        return 0;
    }
    int size;
    fscanf(inputFile, "%d",&size);
    struct Students students[size];
    struct Unique_ID unique_id[size];
    int n=0;
    for(int i = 0; i < size; i++)
    {
        fscanf(inputFile, "%s %d %d",&students[i].name,&students[i].id,&students[i].marks);
        bool found = false;
        for(int j=0; j<n; j++)
        {
            if(students[i].id==unique_id[j].ID){
                unique_id[j].total += students[i].marks;
                found = true;
            }

        }
        if(found == false)
        {
            strcpy(unique_id[n].name,students[i].name);
            unique_id[n].ID = students[i].id;
            unique_id[n].total=students[i].marks;
            n++;
        }
    }

    fprintf(outputFile, "UNIQUE Student total Marks show: \n");
    for(int i = 0; i<n; i++)
    {
        fprintf(outputFile, "%s %d %d\n",unique_id[i].name,unique_id[i].ID,unique_id[i].total);
    }

    return 0;
}


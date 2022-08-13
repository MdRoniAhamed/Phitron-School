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
    FILE * outputFile = fopen("output.txt", "a");
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
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(unique_id[j].total > unique_id[i].total){
            struct Unique_ID tmp =  unique_id[i];
             unique_id[i] =  unique_id[j];
              unique_id[j] = tmp;
            }
        }
    }

    fprintf(outputFile, "UNIQUE Student total Marks show: \n");
    for(int i = 0; i<n; i++)
    {
        fprintf(outputFile, "%s %d %d\n",unique_id[i].name,unique_id[i].ID,unique_id[i].total);
    }
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}


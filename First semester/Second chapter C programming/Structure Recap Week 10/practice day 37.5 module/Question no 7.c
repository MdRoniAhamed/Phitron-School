#include<stdio.h>

int main()
{
    FILE * inputFile = fopen("input.txt", "r");
    if(inputFile==NULL)
    {
        printf("File not Found\n");
        return 0;
    }
    FILE * outputFile = fopen("output.txt", "a");
    int size;
    int num;
    fscanf(inputFile, "%d",&size);
    for(int j=0; j<size; j++)
    {
        fscanf(inputFile,"%d",&num);
        int array[num];
        int sum=0;
        for(int i=0; i<num; i++)
        {
            fscanf(inputFile,"%d",&array[i]);
            sum+=array[i];
        }
        fprintf(outputFile,"sum = > %d\n",sum);
    }


    fclose(inputFile);
    fclose(outputFile);

    return 0;
}


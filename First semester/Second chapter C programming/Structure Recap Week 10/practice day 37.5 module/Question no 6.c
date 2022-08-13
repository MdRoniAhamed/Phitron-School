#include<stdio.h>

int main()
{
    FILE * inputFile= fopen("input.txt", "r");
    if(inputFile==NULL)
    {
        printf("Input file not found\n");
        return 0;
    }
    FILE * outputFile = fopen("output.txt","a");
    int N;
    fscanf(inputFile, "%d",&N);
    int array[N];
    int sum=0;
    for(int i=0;i<N;i++)
    {
        fscanf(inputFile, "%d",&array[i]);
        sum+=array[i];

    }
    fprintf(outputFile, "Sum-> %d\n",sum);
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}


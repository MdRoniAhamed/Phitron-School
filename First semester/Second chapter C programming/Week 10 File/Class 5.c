#include<stdio.h>

int main()
{
    FILE * inputFile = fopen("input.txt","r");
    if(inputFile==NULL){        ///Good practice .
        printf("Input not found.\n");
        return 0;
    }
    FILE * outputFile = fopen("output1.txt","w");
    if(outputFile==NULL)
    {
        printf("Output not found.\n");
        return 0;
    }

    int n;
    fscanf(inputFile,"%d",&n);
    fprintf(outputFile,"%d",n);
    fclose(inputFile);          ///Good practice .
    fclose(outputFile);         ///Good practice .
    return 0;
}


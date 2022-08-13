#include<stdio.h>

int main()
{
    FILE * inputFile = fopen("input.txt", "r");
    FILE * outputFile = fopen("output.txt", "w");
    if(inputFile==NULL){
        printf("File not Found.\n");
    }
    int count = 0;
    while(1)
    {
        char ch = fgetc(inputFile);
        count++;
        if(ch=='\0')
        {
            break;
        }
        if(ch==EOF)
        {
            break;
        }
    }
    fprintf(outputFile, "Count -> %d\n",count);

    return 0;
}



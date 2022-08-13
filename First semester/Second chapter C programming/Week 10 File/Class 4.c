#include<stdio.h>

int main()
{
    FILE * logFile = fopen("log.txt","a");
    FILE * inputFile = fopen("inputk.txt","r");
    if(inputFile==NULL)
    {
       fprintf(logFile,"Input file not found at 3:22 PM\n");
       return 0;
    }
    return 0;
}


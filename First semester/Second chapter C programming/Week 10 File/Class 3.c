#include<stdio.h>

int main()
{
    FILE * inputFile;
    FILE * outputFile;
    inputFile = fopen("input.txt","r");
    outputFile = fopen("output.txt","w");
    if(inputFile==NULL)
    {
       fprintf(outputFile,"Not found.");
       return 0;
    }



    int a;
    fscanf(inputFile,"%d",&a);
    int sum;
    for(int i=0;i<a;i++)
    {
        int n;
        fscanf(inputFile,"%d",&n);
        sum += n;
    }
    fprintf(outputFile,"Sum -> %d\n",sum);
    return 0;
}

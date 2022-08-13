#include<stdio.h>
#include<string.h>
int main()
{

    char io[1000],ro[1000];
    scanf("%s %s",io , ro);
    int i=0,j=0,len;
    while(io[i]==ro[i] && io[i]!='\0'&& ro[i]!='\0'){
        i++;
    }
    if(io[i]=='\0'&& ro[i]=='\0'){
        printf("Equeal");
    }
    else if(io[i]=='\0'&&ro[i]!='\0'){
        printf("A is smaller");
    }
    else if(io[i]!='\0'&&ro[i]=='\0'){
        printf("B is smaller");
    }
    else if(io[i]>ro[i]){
        printf("B is smaller");
    }
    else{
        printf("A is smaller");
    }
}

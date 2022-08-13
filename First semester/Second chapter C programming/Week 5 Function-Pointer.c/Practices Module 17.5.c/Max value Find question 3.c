#include<stdio.h>
int maxvalue(int a, int b){
    if(a>b) return a;
    else    return b;
    }
int main(   )
{
    int number;
    printf("Enter the array of Number:");
    scanf("%d",&number);

    int value[number];
    int v=0;
     printf("Enter the Number of value:");
    for(v=0;v<number;v++){
        scanf("%d",&value[v]);
    }
    int Max = value[0];
    for(v=0;v<number;v++){
       Max = maxvalue(Max,value[v]);
    }
    printf("Max value is :%d",Max);

}

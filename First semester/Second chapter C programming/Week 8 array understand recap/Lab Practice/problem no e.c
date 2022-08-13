#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    int min=0,max=0,count=0;
    int value[num];
    for(int i=0;i<num;i++){
        scanf("%d",&value[i]);
    }
    max=value[0];
    min = value[0];
    for(int i=0;i<num;i++){
        if(value[i]>max){
            max=value[i];
            count++;
        }
        else if(value[i]<min){
            min=value[i];
            count++;
        }
    }
    printf("%d",count);
    return 0;
}


#include<stdio.h>

int main()
{
    int number;
    scanf("%d",&number);//enter value of element;
    int value[101];

    int i=0;
    for(i=0;i<number;i++)
    {
        scanf("%d",&value[i]);
    }
    int position,positionvalue;
    printf("Enter the position and value:");
    scanf("%d %d",&position,&positionvalue);

    for(i=number;i>position-1;i--){
        value[i]=value[i-1];
    }
    value[position-1]=positionvalue;
    for(i=0;i<=number;i++){
        printf("%d",value[i]);
    }

}

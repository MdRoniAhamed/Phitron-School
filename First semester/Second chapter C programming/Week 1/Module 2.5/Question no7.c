#include<stdio.h>

int main()
{
    printf("Enter height is inches: ");
    int height;
    scanf("%d",&height);
    printf("Your height is %d feet %d inches",height/12,height%12);
    return 0;
}

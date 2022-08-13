#include<stdio.h>
int main()
{
    system("cls");
    printf("Enter height of rectangle: ");
    int height, rectangle;
    scanf("%d %d",&height,&rectangle);
    printf("Area is %d\n",height*rectangle);
    printf("Perimedter is %d\n",(height+rectangle)*2);
    return 0;
}

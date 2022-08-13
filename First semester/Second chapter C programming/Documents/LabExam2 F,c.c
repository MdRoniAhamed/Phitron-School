#include<stdio.h>
int main()
{
    int a,b,j=0,i=0;
    scanf("%d %d",&a,&b);

    for(i=1;i<=b;i++){
        printf("*");
    }
    printf("\n");
    for(i=1;i<=a-2;i++){
    for( j=1;j<2;j++){
        printf("*");
    }
    for(j=1;j<=b-2;j++){
        printf(" ");
    }
    for( j=1;j<2;j++){
        printf("*");
        }
        printf("\n");
    }

    for(i=1;i<=b;i++){
        printf("*");
    }
    return 0;
}

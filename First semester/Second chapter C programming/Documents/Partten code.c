#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int dhap=n;
    for(i=1;i<=n;i++){
        for(j=1;j<=dhap;j++){
            printf("*");
        }

        printf("\n");
        dhap--;

    }

}

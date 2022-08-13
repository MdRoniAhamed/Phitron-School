#include<stdio.h>
int main()
{

    int i= 0,j=2;
    for(i=0;i<5;i++){
        printf("i= %d, j= ",i);

        for(j=0;j<6;j++){
            if(j == 2)continue;
              //  break;
            printf("%d",j);
        }

        printf("\n");
    }
    return 0;
}

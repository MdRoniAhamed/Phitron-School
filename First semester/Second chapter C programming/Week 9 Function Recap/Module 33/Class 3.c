#include<stdio.h>

int main()
{
        int a[5] ={10,20,30,40,50};
        int *ptr=a;
        for(int i=0;i<5;i++){
            printf("%d ",*(ptr));
            ptr++;
        }

    return 0;
}

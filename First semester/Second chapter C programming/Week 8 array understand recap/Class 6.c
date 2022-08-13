#include<stdio.h>

int main()
{
    int size;
    scanf("%d",&size);
    int ar[size];
    for(int i=0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d ",ar[i]);
    }
    return 0;
}


#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int value[n];
    for(int i=0;i<n;i++){
        scanf("%d",&value[i]);
    }
    int big=0,mines=0,sum=0;
    for(int i=0;i<n;i++){
        if(big<value[i]){
            big=value[i];
        }

    }
    for(int i=0;i<n;i++){
        mines = big-value[i];
        sum +=mines;
    }

        printf("%d",sum);

}

#include<stdio.h>

void swap(int *n, int *b)
{
    int temp = *n;
    *n = *b;
    *b = temp;
}

void sort(int n, int value[]){
    for(int steps=n-1; steps>=0; steps--){
        int mex= value[steps] , position = steps;
        for(int i=steps;i>=0;i--){
            if(value[i]>mex){
                mex = value[i];
                position = i;
            }
        }
        swap(&value[steps], &value[position]);
        printf("Step %d:  ",steps);
         for(int i=0;i<n;i++){
        printf("%d ",value[i]);
    }
    printf("\n");

    }
}


int main() {
    int n;
    scanf("%d",&n);

    int value[n];

    int i=0;
    for(i=0;i<n;i++){
        scanf("%d",&value[i]);
    }
        sort(n, value);
    for(i=0;i<n;i++){
        printf("%d ",value[i]);
    }
}

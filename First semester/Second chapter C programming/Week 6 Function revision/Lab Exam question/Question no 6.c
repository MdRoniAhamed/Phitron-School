#include<stdio.h>

void sort(int n,int a[]){
    for(int steps=0;steps<n;steps++){
        for(int i=n-1;i>0;i--){
            if(a[i]<a[i-1]){
             int temp=a[i-1];
             a[i-1] = a[i];
             a[i] = temp;
           // printf("hi %d\n",i);//check the program.
            }

        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);///size of bubble number.

    int value[n];///value of bubble number.
    for(int i=0;i<n;i++)
    {
        scanf("%d",&value[i]);///input bubble number.
    }

    sort(n,value);

    for(int i=0;i< n;i++){
        printf("%d ",value[i]);///Output bubble sort number.
    }
    return 0;
}

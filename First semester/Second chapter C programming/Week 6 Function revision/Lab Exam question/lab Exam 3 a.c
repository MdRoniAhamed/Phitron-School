#include<stdio.h>

void sort(int n,int a[]){
    for(int steps=0;steps<n;steps++){
        for(int i=n-1;i>0;i--){
            if(a[i]<a[i-1]){
             int temp=a[i-1];
             a[i-1] = a[i];
             a[i] = temp;
            }

        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);

    int value[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&value[i]);
    }
    sort(n,value);

    for(int i=0;i< n;i++){
        printf("%d ",value[i]);
    }
    return 0;
}

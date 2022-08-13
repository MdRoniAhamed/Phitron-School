#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort(int n, int value[])
{
   for(int steps=0;steps<n;steps++){
    for(int i=0;i+1<n;i++){
        if(value[i]>value[i+1]){
            swap(&value[i],&value[i+1]);
        }
    }
   }
}
int main()
{
    int m;
    scanf("%d",&m);

    int value[m];
    for(int i=0;i<m;i++){
        scanf("%d",&value[i]);
    }
    sort(m, value);
    for(int i=0;i<m;i++){
        printf("%d ",value[i]);
    }
}

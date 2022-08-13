#include<stdio.h>
void selection_sort(int size,int arr[])
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int size = 5;
    int array[size] ;
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    selection_sort(size,array);
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }

    return 0;
}

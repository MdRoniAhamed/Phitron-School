#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);

    int arr[size];
    int i=0,j=0;
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);

    }
    int search;
    printf("Element to search: ");
    scanf("%d",&search);
    for(i=0;i<size;i++){
        if(arr[i]!=search){
                j++;

        }
        else if(arr[i]==search){
             printf("Element found at index %d ",j);
        }




    }
}

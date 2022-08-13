#include<stdio.h>
int main(   )
{

    int arr[] ={1,4,7,10,15,18,5,10};
    int len=0;
    len = sizeof(arr)/sizeof(arr[0]);

   // printf("len:%d",len);
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

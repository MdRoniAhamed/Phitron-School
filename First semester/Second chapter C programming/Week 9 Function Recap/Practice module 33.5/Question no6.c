#include<stdio.h>
void reverse_array(int arr[],int len)
{
    for(int i=0,j=len-1;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j]=temp;
    }

}
int main()
{
    int len=10;
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    reverse_array(array,len);

    for(int i=0;i<len;i++){
        printf("%d ",array[i]);
    }

    return 0;
}


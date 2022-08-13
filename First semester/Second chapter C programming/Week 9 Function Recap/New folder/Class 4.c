#include<stdio.h>

void insert(int arr[],int len,int a,int val)
{
    for(int i=a;i<len-1;i++)
    {
        arr[i-1]=arr[i];
    }
   // arr[a-1]=val;

}

int main()
{
    int arr[6]={1,2,3,4,5};

    int len=6,a=2,val=40;
    insert(arr,len,a,val);
    for(int i=0;i<len-2;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

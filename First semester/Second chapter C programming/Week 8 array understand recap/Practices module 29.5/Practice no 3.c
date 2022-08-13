#include<stdio.h>

int main()
{
    int n;  ///input array size.
    scanf("%d",&n);
    n+=1;
    int arr[n]; ///declare in array.
    for(int i =1;i < n; i++){
        scanf("%d",&arr[i]);    ///Input array value.
    }
    for(int i = 1; i< n;i++){
        if(i%2==0){
            printf("%d ",arr[i]); ///Output the even array.
        }
    }
    return 0;
}


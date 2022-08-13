#include<stdio.h>
int main(   )
{
    int arr[100],n,p,value,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);///input array.
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);///outpput array.
    }
    printf("Enter the position and value: ");///Enter the position and value
    scanf("%d %d",&p,&value);

    for(i=n-1;i>=p-1;i-- ){
        arr[i+1]=arr[i];
    }

    arr[p-1]=value;

    for(i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
}

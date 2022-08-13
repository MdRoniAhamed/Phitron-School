#include<stdio.h>
int main()
{
    int a,b,c,n;
    printf("Enter the number of size:");

    scanf("%d",&n);

    int arri[n];
    printf("Enter the value of array:");
    for(a=0;a<n;a++ ){
        scanf("%d",&arri[a]);
    }
    for(c=0,b=n-1;c<b;b--,c++){
        int temp = arri[c];
        arri[c] = arri[b];
        arri[b] = temp;
    }
    for(b=0;b<n;b++ ){
        printf("%d ",arri[b]);
    }
}

#include<stdio.h>
#include<stdbool.h>
int makeNsquares(int n){
    int *squares = (int *)malloc(n* sizeof(int));
    for(int i=0;i<n;i++){
        squares[i] = i*i;
    }
    return squares;
}
int main()
{
    int n;
    scanf("%d",&n);

    int *sq;
    sq=makeNsquares(n);
    for(int i=0;i<n;i++){
        printf("%d ",sq[i]);
    }
}


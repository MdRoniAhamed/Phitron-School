#include<stdio.h>

void change_values(int n,int l,int r,int array[])  ///Function.
{
    for(int i=l;i<=r;i++){   ///Change array value.
        array[i]=0;
    }
}
int main()
{
    int N,L,R;
    scanf("%d%d%d",&N,&L,&R);   ///Input array size N. input L , input R.
    int array[N];
    for(int i=0;i<N;i++)    ///Index starts 0 .
    {
        scanf("%d",&array[i]);  ///Input array value.
    }
    change_values(N,L,R,array);  ///Call change function .
    for(int i=0;i<N;i++)
    {
        printf("%d ",array[i]);   ///Print array.
    }
    return 0;
}


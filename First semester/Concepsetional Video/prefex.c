#include<stdio.h>

int main()
{

    int n;
    scanf("%d",&n);

    int arri[n];
    int prefix[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arri[i]);
       }
    prefix[0]=arri[0];
    for(int i=0;i<n;i++){
        prefix[i] = arri[i]+prefix[i-1];
    }
    int q,a,s;
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%d %d",&s,&a);
        printf("%d ",prefix[a-1]-prefix[s-2]);
    }
}

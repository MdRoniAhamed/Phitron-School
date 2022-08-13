#include<stdio.h>

int main()
{
    int n,q,j=0;
    scanf("%d %d",&n,&q);
    int L[q],R[q],x[q];
    for(int i=0;i<q;i++){
        scanf("%d %d",&L[i],&R[i]);
       while(R[i] != 0) {
        int temp = L[i]%R[i];
        L[i] = R[i];
        R[i] = temp;
    }
     x[i]=L[i];
     printf("%d",x[i]);

    }
//    for(int i=0;i<q;i++){
//        printf("%d ",x[i]);
//    }

    return 0;
}


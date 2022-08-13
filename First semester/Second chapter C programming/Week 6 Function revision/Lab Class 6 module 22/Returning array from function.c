#include<stdio.h>

int * makecopy(int n, int in[])
{   int* out = (int *) malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        out[i] = in[i];///Array copy function
    }
    return out;
}


int main()
{
    int n;
    scanf("%d",&n);//input
    //  printf("%d ",output);
    int ip[n];
    int i=0;
    for(i=0;i<n;i++){
        scanf("%d",&ip[i]);///array input
    }

    int *b=  makecopy(n,ip);



    for(i=0;i<n;i++){
        printf("%d ",b[i]);//array copy output
    }
}

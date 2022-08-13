#include<stdio.h>

void roted(int n, int b[]){
    for(int i=0;i<n;i++){
     b[i]=b[(i+1)%n];

    }
}

int main(){
    int n;//number of array length.
    scanf("%d",&n);
    int k[n];//number of array value.
    for(int i=0;i<n;i++){
        scanf("%d",&k[i]);//input number of
    }
    roted(n,k);
   for(int i=0;i<n;i++){
         printf("%d", k[i]);
    }
}


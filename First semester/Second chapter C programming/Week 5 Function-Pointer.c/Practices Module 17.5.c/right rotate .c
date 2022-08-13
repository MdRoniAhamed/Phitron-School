#include<stdio.h>
void rotate(int n, int k[n]){
    int first= k[0];
    for(int i=0;i<n-1;i++){
        k[i] = k[i+1];
    }
    k[n-1] = first;
}
void rotateby(int n, int k[], int a){
    a=a%n;
    for (int i=0 ; i<a;i++){
        rotate(n, k);
    }

}
int main(   ){
    int n;
    scanf("%d",&n);
    int k[n];
    for(int i=0;i<n;i++){
        scanf("%d",&k[i]);
    }
    int a;
    scanf("%d",&a);

     rotateby(n,k,a);
    for(int i=0;i<n;i++){

        printf("%d ",k[i]);
    }
}

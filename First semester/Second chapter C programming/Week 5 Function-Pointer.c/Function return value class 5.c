#include<stdio.h>

int getmin(int a,int b){
    if( a < b )     return a;
    else            return b;
}

int main(   )
{
   int n;
   scanf("%d",&n);
    int a[n];
    int i=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int ans = a[0];
    for(i=0;i<n;i++){
        ans =getmin(ans,a[i]);
    }

         printf("MIn value is %d",ans);

}

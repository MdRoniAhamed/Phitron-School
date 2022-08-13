#include<stdio.h>

void makesquares(int n, int ans[])
{

    for(int i=0;i<n;i++){
        ans[i] = (i+1)*(i+1);
    }

    return ans;
}
int main()
{
    int n=5;
    int ans[n];

    makesquares(n,ans);
    for(int i=0;i<n;i++){
    printf("%d ",ans[i]);
    }

}

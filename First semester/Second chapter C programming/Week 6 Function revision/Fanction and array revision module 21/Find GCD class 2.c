#include<stdio.h>

int gcd(int x,int y)
{
    while(y != 0) {
        int temp = x%y;
        x = y;
        y = temp;
    }
    return x;
}
int findGcd(int sz, int arr[]){
    int ans = arr[0];
    for(int i=1;i<sz;i++){
        ans = gcd(ans,arr[i]);
    }
    return ans;
    }

int main()
{
    int arr[] = {2,4};
    printf("%d",findGcd(2,arr));
}


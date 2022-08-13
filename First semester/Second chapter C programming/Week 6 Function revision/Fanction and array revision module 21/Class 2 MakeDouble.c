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
int findGcd(const int sz,const int arr[]){

    int ans = arr[0];
    for(int i=1;i<sz;i++){
        ans = gcd(ans,arr[i]);
    }
    return ans;
    }

void makeDouble(int sz, int arr[])
{
    for(int i=0;i<sz;i++){
        arr[i] *=2;
    }
}

int main()
{
    int arr[] = {4,8,12};
    makeDouble(3,arr);
    for(int i=0;i<3;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("%d",findGcd(3,arr));
}


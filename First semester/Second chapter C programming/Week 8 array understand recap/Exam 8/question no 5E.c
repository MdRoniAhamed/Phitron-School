#include<stdio.h>

int main()
{
    int n; ///Input value.
    scanf("%d",&n);
    int sum;
    while(n!=0){
        sum+=n%10;
        n=n/10;
    }
    printf("%d",sum); ///printf sum value.
    return 0;
}


#include<stdio.h>
#include<string.h>

struct ArrayHolder{
    int array[100];
};
struct ArrayHolder makeNarray(int n){
    struct ArrayHolder ans;
    for ( int i=0; i<n;i++){
        ans.array[i] = i+1;
    }
    return ans;
}
int main()
{
    int n= 20;

    struct ArrayHolder ans = makeNarray(n);
    for(int i=0;i<n;i++){
        printf("%d ",ans.array[i]);
    }

}


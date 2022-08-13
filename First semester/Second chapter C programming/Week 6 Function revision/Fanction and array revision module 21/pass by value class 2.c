#include<stdio.h>

int addone(int x){
    x +=1;
    return x;
}
int main (){
    int x = 5;
    int b = addone(x);

    printf("%d %d\n",x,b);
    }

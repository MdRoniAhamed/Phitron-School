#include<stdio.h>

int add(int a, int b){
    static int count = 0;
    count++;
    printf("%d th call\n",count);
    return a+b;
    }


int main()
{
    add(1,2);
    add(1,2);
    add(1,2);

    add(1,2);
    add(1,2);
}

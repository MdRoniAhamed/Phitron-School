#include<stdio.h>

int Swaps(int* a, int* b)
{   int temp=0;
    if(*a>*b){
    temp = *a;
    *a = *b;
    *b = temp;
    }
    return *a,*b;
}

int main()
{
    int a, b;
    scanf("%d %d",&a,&b);

    Swaps(&a,&b);
    printf("%d %d",a , b);

}

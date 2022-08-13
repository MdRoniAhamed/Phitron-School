#include<stdio.h>

int main()
{
    int n=100;//size of array.
    int *m =(float *)malloc(n*sizeof(float));//dynamic memory allocation.
    printf("%d",sizeof(n));
}

//এটি মেমরিতে  400 byte জায়গা নিবে।


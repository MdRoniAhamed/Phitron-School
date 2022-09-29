#include<stdio.h>

int main()
{
    int i=1,num;
    scanf("%d",&num);
    while(i<=num){
      int  nnum = i*i*i;
        printf("%d and cube of the %d is:%d\n",i,i,nnum);
        i++;
    }

    return 0;
}


#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n); ///array size .
    int ar[n];
    for(int i=0;i <n;i++){
        scanf("%d",&ar[i]);///array value input.
    }

    int count[100]={0};
    for(int i=0;i<n;i++){
        //int value = ar[i];
        count[ar[i]]++; ///count array.
    }
    for(int value=0;value<100;value++){
       // int value = ar[i];
       if(count[value]>0){
        printf("value=> %d, count=>%d\n",value,count[value]);///count array print
       }
    }

    return 0;
}


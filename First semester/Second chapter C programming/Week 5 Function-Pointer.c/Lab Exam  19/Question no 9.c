#include<stdio.h>

void Revese(int n,int value[])
{
  int temp=0;
  int i=0;
  while(i<n/2){
    temp=value[i];
    value[i]=value[n-1-i];
    value[n-1-i]=temp;
    i++;
  }
}
int main(   )
{
    int number;
    number = 5;///input number .

    int value[number];///Input value.

    for(int i=0;i<number;i++){
        scanf("%d",&value[i]); ///Input value.
    }
    Revese(number,value);

    for(int i=0;i<number;i++){
        printf(" %d ",value[i]);
    }

}

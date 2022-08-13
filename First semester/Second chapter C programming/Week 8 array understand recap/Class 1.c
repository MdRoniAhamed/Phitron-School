#include<stdio.h>

int main()
{
    int n= 10;
    int note;
    int count=0;

    for(int i =1;i<=10;i++){
        scanf("%d",&note);
        if(note==100){
            //100 hola
            count ++;
        }
    }
    printf("%d %d",note,count);
}


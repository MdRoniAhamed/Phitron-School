#include<stdio.h>
int main()
{ //Roni Ahamed;
    int A,B,count=0;
    scanf("%d%d",&A,&B);

    if(A<B){
        for(int a=A;a<=B;a++){
            count ++;
        }
    }
    else{
    count=0;
    }
    printf("%d",count);
}

#include<stdio.h>
int main()
{ //Md Roni Ahamed.
    int a,u=1;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(i%2 !=0){
            printf("I hate ");  //if jai tahola else er 3/2=1.5
            if(u !=a){          //u !=a; a=1;u=a; i%2 3%2=1
                printf("that ");
            }
        }
        else{
            printf("I love ");
            if(u !=a){
                printf("that ");
    }
    }
    u++;
    }

    printf("it");
    return 0;
}

#include<stdio.h>
int main()
{
    int a,f=1;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){//a=i;f=a;
        if(i%2 !=0){
                printf("I hate ");
            if(a!=f){
                printf("that ");
            }

        }
        else{
            printf("I love ");
            if(a!=f){
                printf("that ");
        }
    }
    f++;
    }
    printf("it");
    return 0;
}

#include<stdio.h>
int main()
{//md roni ahamed;
    int D;
    scanf("%d",&D);
    int b=0,c=0,u=0,j=0;
    char a;
    for (int i=0;i<=D;i++){
        scanf("%c",&a);

        if(a=='D'){
            c++;
        }
        if(a=='A'){
            b++;
        }
    }
//    printf("%d\n",b);
//    printf("%d\n",c);
    if(b>c){
        printf("Anton");
    }
    else if(c>b){
        printf("Danik");
    }
    else{
        printf("Friendship");
    }
    return 0;
}

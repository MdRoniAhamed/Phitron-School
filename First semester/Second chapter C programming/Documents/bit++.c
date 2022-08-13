#include<stdio.h>
int main()
{
    int x=0;

    int n;
    scanf("%d",&n);

    for(int i=1; i<=n;i++){
        char a,b,v;
        scanf(" %c%c%c",&a,&b,&v);
//        printf("%c%c%c",a,b,v);
        if(b=='+')
            x++;
        else if(b=='-')
            x--;
    }
    printf("%d",x);
}

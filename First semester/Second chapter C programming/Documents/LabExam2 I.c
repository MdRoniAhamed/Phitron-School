#include<stdio.h>
int main()
{//roni ahamed;
    int mark;
    scanf("%d",&mark);

    if(mark<40){
        printf("%d",40-mark);
    }
    else if(mark<70){
        printf("%d",70-mark);
    }
    else if(mark<90){
        printf("%d",90-mark);
    }
    else{
        printf("expert");
    }
    return 0;
}

#include<stdio.h>
int main()
{//Md Roni Ahamed;
    int S,T,X;
    scanf("%d%d%d",&S,&T,&X);
  if((0<=S,T,X<=23)&&(S!=T)){
    if((S<X&&X<T)||(S==X)){
        printf("Yes");
    }
    else if(S>T){
    if((S<=X&&X<=23)||(1<=X&&X<T)){
        printf("Yes");
    }
    else{
        printf("No");
    }
    }
    else{
        printf("No");
    }
  }
 return 0;
}

#include<stdio.h>
int main()
{
    int A,B,C,D,E,F,X;
    scanf("%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&X);
    int a=0,b=0,c=0,d=0,e=0,f=0;
    a= A+C;
    b =X/a;
    if(X%a<A){
        c=X%a;
    }
    else{
        b++;
    }
    A = b*A+c;
    A *=B;
   // printf("%d\n",A);

    d= D+F;
    e=X/d;
    if(X%d<D){
        f=X%d;
    }
    else{
        e++;
    }
    D = e*D+f;
    D *=E;
  //  printf("%d",D);
    if(A>D){
        printf("Takahashi");
    }
    else if(D>A){
        printf("Aoki");
    }
    else{
        printf("Draw");
    }

    return 0;
}

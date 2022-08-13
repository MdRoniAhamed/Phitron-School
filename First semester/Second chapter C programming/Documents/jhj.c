#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

//    for (int d=1;d<=a&&d<=a;d++){
//            if(a%d==0 && b%d==0){
//        gcd=d;
//
//            }
//    }
//    printf("current gcd:%d",gcd);
while(a!=0){
    int rem=b%a;
    b=a;
    a =rem;

    printf("%d %d\n",a,b);}
    printf("%d",b);

}


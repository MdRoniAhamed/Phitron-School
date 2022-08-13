#include<stdio.h>
 int gcd(int a, int b)
 {
     while(a!=0){
     int x=b%a;
     b=a;
     a=x;
     }
     return b;
 }
 int main(){
    int a,b,c,d,e,f,g,h,i,j;
    scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);


  int A=gcd(a,b);
  int B=gcd(A,c);
  int C=gcd(B,d);
  int D=gcd(C,e);
  int E=gcd(D,f);
  int F=gcd(E,g);
  int G=gcd(F,h);
  int H=gcd(G,i);
  int I=gcd(H,j);
 // int J=gcd(I,c);
  printf("%d",I);


 }

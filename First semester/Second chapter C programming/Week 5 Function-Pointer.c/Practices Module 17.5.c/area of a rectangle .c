#include<stdio.h>
int area(int a,int b){
    int c = a*b;
    return c;
  }
  int main()
  {
      int a,b;
      scanf("%d%d",&a,&b);
      int d=area(a,b);
      printf("Area is %d\n",d);
  }

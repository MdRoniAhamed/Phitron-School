#include<stdio.h>
int main()
{//Roni ahamed
    int a;
    int sum=0;
    scanf("%d",&a);
    int b=a;
    int x,y,z;
 for(int i=1;i<2;i++){
    z = b%10;
    //printf("%d",z);
 }
 for(int j=1;j<2;j++){
    b =b/10;
    y =b%10;
     //   printf("%d",y);
 }
 for(int r=1;r<2;r++){
    b =b/10;
    x =b%10;
    //printf("%d",x);
    }
if(x !=0 && y !=0 && z !=0){
    sum=a+(y*100+z*10+x)+(z*100+x*10+y);
    printf("%d",sum);
}
return 0;
}

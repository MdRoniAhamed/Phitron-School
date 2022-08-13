#include<stdio.h>
int main()
{
    int n,p,q,a=0;
    scanf("%d",&n);
  //  printf("%d",n);
    for(int i=1;i<=n;i++){
        scanf("%d %d",&p,&q);//roni ahamed;
       // printf("%d %d",p,q);
       if((q-p !=1)&&(q-p !=0)){
        a++;
//        printf("%d",a);
       }

       else if(a==0){
        a=0;
       }

}
printf("%d",a);
return 0;
}

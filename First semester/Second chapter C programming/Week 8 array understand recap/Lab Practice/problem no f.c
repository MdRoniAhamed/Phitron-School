#include<stdio.h>

int main()
{
    int nam;
    scanf("%d",&nam);
    int i[nam],j[nam];
    int a=0,b=0;
    for(int m=0;m<nam;m++){
      scanf("%d %d",&i[m],&j[m]);
      if(i[m]>j[m]){
        a++;
      }
      else if(i[m]<j[m])
      {
          b++;
      }


    }
    if(a>b){
        printf("Mishka");
    }
    else if(a==b){
        printf("Friendship is magic!^^");
    }
    else{
        printf("Chris");
    }
    return 0;
}


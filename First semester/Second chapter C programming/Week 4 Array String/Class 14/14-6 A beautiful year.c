#include<stdio.h>
#include<stdbool.h>
int main(   )
{
    int year;
    scanf("%d",&year);

    for(int y=year+1;;y++){
            int fr[10]={0};
            bool repeat=false;

        int curyear=y;
        while(curyear>0){
           int d=curyear%10;
           curyear /=10;
           fr[d]++;
           if(fr[d]>=2){
                repeat=true;

           }

          // printf("%d", d);
        }
        if(!repeat){
        printf("%d",y);
        break;
        }
       // printf("\n");
    }
}

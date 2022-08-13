#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    int i=0;
    int rating[number];
    for(i=0;i<number;i++){
        scanf("%d",&rating[i]);
    }



    int sum=0;
    for(i=0;i<number;i++){
        sum +=rating[i];
    }
    // printf("%d\n",sum);
    double average = (double)sum/number;
    printf("Average: %.2lf\n",average);

    for(int i=0;i<5;i++){
            int count=0;
        for(int val=0;val<number;val++){
            if(rating[val]==i){
                count++;
            }
        }
        printf("%d  ->%d\n",i,count);
    }

}

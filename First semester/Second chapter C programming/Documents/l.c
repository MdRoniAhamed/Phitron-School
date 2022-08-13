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
    printf("Average: %.2lf",average);
     int count[6]={0};
    for(int i=0;i<number;i++){
        int x= rating[i];
        count[x]++;

        }
        for(i=1;i<=5;i++){
        printf("%d  ->%d\n",i,count[i]);
    }

}

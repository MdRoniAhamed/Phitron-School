#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int rating[n];
    for(int i=0;i<n;i++){
        scanf(" %d",&rating[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum +=rating[i];
    }
    double average=(double)sum/n;
    printf("Average : %lf\n",average);

    int count[6]={0};
    for(int i=0;i<n;i++){
        int x=rating[i];
        count[x]++;
    }
    for(int i=0;i<6;i++){
        printf("%d  -> %d\n",i,count[i]);
    }

}

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char RR[n];
    //scanf gets(RR);
    scanf("%s", RR);
    int count=0;
    int i=0;

    while(RR[i]){
    if(RR[i]==RR[i+1]){
       count++;

    }
        i++;
       }
    printf("%d",count);
    return 0;
}

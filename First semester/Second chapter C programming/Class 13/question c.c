#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    char RR[n];
   for(int i=0;i<n;i++){
    scanf("%c",&RR[i]);
   }
    int count=0;
    int i=0;
    //return 0;
  //  n++;
    while(RR[i]){

        if (RR[i] == RR[i + 1]) {
            count++;
        }

        i++;

    // if(RR[i]==RR[i+1]){
    //    count++;
    //    printf("%c",RR[i]);

    // }
    // i++;
    // n--;
    }

    // printf("%d\n",n);

//    for(int i=0;i<n;i++){
//        if(RR[i]==RR[i-1]){
//        
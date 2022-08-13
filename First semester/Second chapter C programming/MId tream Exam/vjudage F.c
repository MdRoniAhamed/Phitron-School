#include<stdio.h>
int main()
{
    long long int number;
    scanf("%lld",&number);
  //  printf("%lld",number);

 int n=number;
    int count=0,cout=0;
   while(number != 0)
    {
     int bagfol=number%10;
      number = number/10;
      count++;
      if(bagfol==7 || bagfol==4){
        cout++;
      }

    }
    if(cout==7 || cout==4){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}//Md Roni Ahamed;
//int number;
// scanf("%d",&number);
// printf("%d",number);

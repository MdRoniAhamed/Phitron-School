
#include<stdio.h>
int main()
{
    int a,coun=0;
    printf("Enter any intezer : ");
    scanf("%d",&a);
    while(a!=0){
        a = a/10;
        ++coun;
    }
    printf("Total number of digit : %d",coun);

}

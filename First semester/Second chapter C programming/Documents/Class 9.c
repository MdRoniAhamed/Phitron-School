#include<stdio.h>
int main(){

        long long age1,age2;
        scanf("%ld %ld",&age1,&age2);
         int years;
    while(age1 <= age2){
        age1 *= 3;
        age2 *= 2;
       // printf("%ld %ld\n",age1 ,age2);
                years++;


    }
    printf("%d\n",years);
}

#include<stdio.h>

void check_prime(int num);

int main()
{
    int a;
    scanf("%d",&a);//input the prime number chek that number;

    check_prime(a);

    return 0;
}
void check_prime(int num){
    int i,count=0;
    for(i=2;i<=num/2;i++){//condition check count is 0 or any value.
        if(num%i==0){
            count++;
            break;
        }
    }
    if(count == 0 && num!=1){//check the prime number Rull ....
        printf("%d is a prime number.",num);
    }
    else{
        printf("%d is not a prime number.",num);
    }

}

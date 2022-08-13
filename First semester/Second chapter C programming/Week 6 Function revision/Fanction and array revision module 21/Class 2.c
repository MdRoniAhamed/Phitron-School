#include<stdio.h>
#include<stdbool.h>

void makePositive(double *x){
    if(*x < 0) *x = -*x;
}

int main(){
    while(true){
        double x;
        scanf("%lf",&x);
        if(x==0) break;
        makePositive(&x);
       // if(x < 0) x = -x;
        printf("%lf\n", x);
    }

}

#include<stdio.h>

struct structarray {    ///structure
    int c[10]; ///array.
};


int main(){
    struct structarray value;   ///Inter value.
    value.c[0] = 5;
    value.c[1] = 10;
    value.c[2] = 30;
    int num = 3;
    for(int i = 0; i < num; i++){
        printf("%d ", value.c[i]);  ///print value.
    }

    return 0;
}



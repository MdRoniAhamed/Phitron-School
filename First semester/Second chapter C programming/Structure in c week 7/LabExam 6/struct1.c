#include<stdio.h>

struct parson{
    int age;
    float salary;
};



int main()
{
    struct parson parson1={24,260000.36};
    struct parson parson2,parson3;
    parson2.age=25;
    parson2.salary=28000.54;

    parson3 = parson2;

    if(parson3.age==parson2.age&&parson3.salary==parson2.salary){
        printf("parson3 equal parson2");
    }
    else{
        printf("parson3 not equal parson2");
    }

    return 0;

}


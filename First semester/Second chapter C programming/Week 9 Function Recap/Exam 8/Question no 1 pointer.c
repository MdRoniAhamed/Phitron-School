#include<stdio.h>

float make_sum(float value,float value1)
{
    float sum = value+value1;
    return sum;  //Return sum.
}
int main()
{
    float value1=10.5,value2=11.5; // Input float value.

    float sum = make_sum(value2,value2); //call by function make_sum.
    printf("%f \n",sum); ///print sum.

    return 0;
}

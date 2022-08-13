#include<stdio.h>
int main()
{
    int values[]={1,2,3,4,5,6,7,8,9,10};
    double reals[89];

    printf("%d %d\n",sizeof(int),sizeof(double));
    printf("%d %d\n",sizeof(values),sizeof(reals));

    int sz=sizeof(values)/sizeof(values[0]);
    printf("%d",sz);
}

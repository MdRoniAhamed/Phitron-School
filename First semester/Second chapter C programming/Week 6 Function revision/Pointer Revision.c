#include<stdio.h>
int main()
{
    double var=90.4;
    printf("%p %lld\n",&var,&var);
    double var2;
    printf("%p %lld\n",&var2,&var2);

    double *pvar = &var;

    printf("%p %lld\n",pvar,pvar);
    printf("%lf\n",var);
    pvar +=10;
    printf("%p %lld\n",pvar,pvar);
}

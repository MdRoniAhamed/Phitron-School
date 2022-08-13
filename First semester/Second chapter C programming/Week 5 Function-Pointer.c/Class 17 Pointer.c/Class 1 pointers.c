#include<stdio.h>
int main()
{
    int value = 100;
    int* pval = &value;
     printf("%d\n",value);
     printf("%p address has value %d\n",pval,*pval);
     value=200;

     printf("%d\n",value);
     printf("%p address has value %d\n",pval,*pval);

     *pval = 300;

     printf("%d\n",value);
     printf("%p address has value %d\n",pval,*pval);

    int value2 = 200;
    pval = &value2;
    printf("%d\n",value);
    printf("%p address has value %d\n",pval,*pval);

    int v = 500;
    printf("%d",*&v);

}

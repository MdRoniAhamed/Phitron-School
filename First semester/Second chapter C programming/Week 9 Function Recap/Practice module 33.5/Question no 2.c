#include<stdio.h>
int get_max(int a,int b)
{
    int c=0;
    if(a<b){
        c=a;
    }
    else
    {
        c=b;
    }

    return c;
}
int main()
{
   int a,b;
   printf("Enter value a and b: ");
   scanf("%d %d",&a,&b);
   int c=get_max(a,b);
   printf("Value of MIN=> %d",c);

    return 0;
}



#include<stdio.h>
void Truncate(char a[], int b){
    int s = strlen(a);
    if(b<0 ||    b>s) return ;
    a[b] ='\0';
}
int main(     )
{
    char a[100];
    gets(a);

    int b;
    scanf("%d",&b);
    Truncate(a, b);

    printf("%s",a);
}

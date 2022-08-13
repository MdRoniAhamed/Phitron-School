#include<stdio.h>
#include<string.h>
void send(char *ar)
{
    int sz=strlen(ar);
    printf("%d\n",sz);

}
int main()
{
    char ar[5]="abcd";
    send(ar);
    return 0;
}


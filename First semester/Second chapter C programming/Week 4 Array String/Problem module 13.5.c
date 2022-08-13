#include<stdio.h>
int main()
{
    char tu[]="you are right";
    int i=0,j=0,len=0;
    while(tu[i]!= '\0'){
        i++;
        len++;
    }
    char ti[len];

    for (i=0,j=len-1;i<len;j--,i++){
        ti[i]=tu[j];
    }
    ti[len] = '\0';
    printf("%s",ti);
}

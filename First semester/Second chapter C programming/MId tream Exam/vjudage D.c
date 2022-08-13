#include<stdio.h>
int main    ()
{
    char amr[1001];
    scanf("%s",&amr);
    int len=strlen(amr);
   // printf("%d",len);
//    for(int i=0;i<1;i++){
        if(amr[0]>='a' && amr[0]<='z'){
           amr[0] -=32;
        }
    puts(amr);
}

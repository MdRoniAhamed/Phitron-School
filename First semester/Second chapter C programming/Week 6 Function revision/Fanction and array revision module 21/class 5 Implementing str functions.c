#include<stdio.h>
#include<string.h>

void stringcat(char a[], char b[], char out[]){
    int idx1 = 0,idx2 = 0,idx =0;
    while(a[idx1] !='\0'){
        out[idx] = a[idx1];
        idx++;
        idx1++;
    }
    idx1=0;
    while(b[idx1] !='\0'){
        out[idx] = b[idx1];
        idx++;
        idx1++;
    }
    out[idx] = '\0';

}


int main()
{
  char str[100];
  char str2[100];
  scanf("%s %s",str,str2);
  int sz = strlen(str) + strlen(str2);
  char out[sz+1];
    stringcat(str,str2,out);
   printf("%s",out);
}


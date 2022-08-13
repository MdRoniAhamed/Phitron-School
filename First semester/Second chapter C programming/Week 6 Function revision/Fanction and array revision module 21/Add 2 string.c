#include<stdio.h>
#include<string.h>

void stringcat(char a[], char b[], char out[]){
    char *ptr1 = a,*ptr2 = b,*ptr = out;
    while(*ptr1 !='\0'){
        *ptr = *ptr1;
        ptr1++;
        ptr++;
    }
    while(*ptr2 !='\0'){
        *ptr = *ptr2;
        ptr2++;
        ptr++;
    }
   *ptr = '\0';

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



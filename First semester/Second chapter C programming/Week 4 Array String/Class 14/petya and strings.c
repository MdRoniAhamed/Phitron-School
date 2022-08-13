#include<stdio.h>
#include<string.h>
int main(   )

{
    int a=0,b,c;
    char r[100];
    char t[100];

    scanf("%s %s",&r,&t);
   // printf("%s %s\n",r ,t);
   // int len=strlen(r);
 //   printf("%d\n",len);
    for(a=0;a<strlen(r);a++){
        if(r[a]<='Z'&&r[a]>='A'){
            r[a]=r[a]+32;
        }

    }
     for(a=0;a<strlen(r);a++){

        if(t[a]>='A'&&t[a]<='Z'){
            t[a]=t[a]+32;
        }
    }
    if(strcmp(r,t)==0){
        printf("0");
    }
    else if(strcmp(r,t)<0){
        printf("-1");
    }
    else{
        printf("1");
    }
  //  printf("%s %s",r ,t);
}

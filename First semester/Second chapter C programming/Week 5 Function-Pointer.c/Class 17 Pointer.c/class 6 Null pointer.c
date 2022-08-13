#include<stdio.h>
 int main()
 {
    //  int *ptr;
     char str[] = "Hello apple";
     char *first = str;
     char *ch = strchr(str,'d');

     if(!ch){
        printf("Found null.No occurrence");
     }
     else{
        printf("Found");
     }
 }

#include<stdio.h>
#include<string.h>

    int main()
    {
        char str[101];
      //  printf("Enter String: ");
        gets(str);

          int hash[128] = {0};
    int c = 0;
    for (int i = 0;i < strlen(str);i++){
        hash[str[i]] = 1;
        }
        for(int i=0;i<128;i++){
            c += hash[i];
        }


        if(c%2==0){
             printf("CHAT WITH HER!");
        }
        else{
          printf("IGNORE HIM!");
        }
    }


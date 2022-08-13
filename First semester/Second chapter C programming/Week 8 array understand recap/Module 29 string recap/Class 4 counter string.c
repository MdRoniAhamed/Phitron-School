#include<stdio.h>

int main()
{
    char ar[100];
    scanf("%s",ar);
    int counter[26]={0};
    for(int i=0;i<strlen(ar);i++){
        counter[ar[i]-'a']++;
    }
    int val=0;
    for(char value='a';value<='z';value++){
        if(counter[value-'a']>0){
            printf("Value==>%c,counter=>%d\n",value,counter[value-'a']);
            val++;
        }
    }
    printf("%d",val);

    return 0;
}


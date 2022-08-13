#include<stdio.h>

int main()
{
    int value;
    value = 25;

    char str[1000];

    int index = 0;

    while(value>0){
        int digit= value%2;
        value /=2;
        str[index] = digit + '0';
        index++;
        }

    str[index]= '\0';
    int i=0,j=strlen(str)-1;
    while(j>i){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("Binary  = %s\n",str);
    int sum = 0,p = strlen(str)-1;

    for(i=0;i<strlen(str);i++){
        char c=str[i];
        int digit = c-'0';
        sum+= digit*pow(2,p);
        p--;
    }

    printf("Decimal = %d",sum);
    return 0;

}


#include<stdio.h>
#include<string.h>


int main()
{
    char num[1000],numm[1000],jogfol[2000];
    scanf("%s %s",num,numm);
    strrev(num);
    strrev(numm);

    int i=0,j=0,hate=0;;
    while(i<strlen(num)&&j<strlen(numm)){
        int sum = (num[i]-'0')+(numm[i]-'0')+hate;
        jogfol[j]=(sum%10)+'0';
        hate=sum/10;

        i++;
        j++;
    }

    while(i<strlen(num)){
        int sum = (num[i]-'0')+hate;
        jogfol[j]=(sum%10)+'0';
        hate=sum/10;

        i++;
        j++;
    }

    while(i<strlen(numm)){
        int sum = (numm[i]-'0')+hate;
        jogfol[j]=(sum%10)+'0';
        hate=sum/10;
        i++;
        j++;

    }
    while(hate>0){
        int sum =hate;
        jogfol[j]=(sum%10)+'0';
        hate=sum/10;
        j++;
    }
    strrev(jogfol);
    jogfol[j]='\0';
    printf("%s\n",jogfol);

    return 0;
}


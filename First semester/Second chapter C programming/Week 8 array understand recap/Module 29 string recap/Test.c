#include<stdio.h>
#include<string.h>


int main()
{
    char a[100],b[100],jogfol[100];
    scanf("%s %s",a,b);
    strrev(a);
    strrev(b);
    int i=0,j=0,k=0,hate=0;
    while(i<strlen(a) && j<strlen(b)){
        int sum=(a[i]-'0')+(b[j]-'0')+hate;
        jogfol[k]=(sum%10+'0');
        hate = sum/10;
        i++;
        j++;
        k++;
    }
     while(i<strlen(a)){
        int sum=(a[i]-'0')+hate;
        jogfol[k]=(sum%10+'0');
        hate = sum/10;
        i++;
        k++;
     }
     while(j<strlen(b)){
        int sum=(b[j]-'0')+hate;
        jogfol[k]=(sum%10+'0');
        hate = sum/10;
        j++;
        k++;
     }
     while(hate>0){
        jogfol[k]=(hate%10+'0');
        hate=hate/10;
        k++;
     }
    jogfol[k]='\0';

    strrev(jogfol);
    printf("%s ",jogfol);

    return 0;
}



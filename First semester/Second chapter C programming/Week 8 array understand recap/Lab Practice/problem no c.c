#include<stdio.h>
#include<string.h>

int main()
{
    int m;
    scanf("%d",&m);
    char ar[m];
    scanf("%s",&ar);
  //  ar[strlen(ar)]='\0';
    int count[26] = {0};

    for(int i=0;i<strlen(ar);i++){
        if(ar[i]>='a'&&ar[i]<='z'){
            ar[i] =ar[i] - 32;
        }
    }
    for(int i=0;i<strlen(ar);i++){
        count[ar[i]-'A']=1;
    }
    for(char value='A';value<='Z';value++){
        if(count[value-'A']==0){
            printf("NO");
            return 0;
        }
    }

    printf("YES");

    return 0;
}


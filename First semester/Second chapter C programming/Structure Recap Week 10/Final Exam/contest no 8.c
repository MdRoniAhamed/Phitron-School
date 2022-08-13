#include<stdio.h>

int main()
{
    char str[101];
    scanf("%s",&str);
    int count[100]={0};
    int n=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            count[n]=str[i]-'0';
            n++;
        }

    }
    for(int i=0; i<n-1; i++){
        for(int j=i;j<n;j++){
            if(count[j]<count[i]){
                int temp = count[i];
                count[i]=count[j];
                count[j]=temp;
            }
        }
    }
    printf("%d",count[0]);
    for(int i=1;i<n;i++){
        printf("+%d",count[i]);
    }
    return 0;
}


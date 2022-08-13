#include<stdio.h>

int main()
{
    int m,n;  ///input m,n value.
    scanf("%d %d",&m,&n);
    int arr[m];
    int arri[100]={0};
    int len=0;
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr[i]); ///input array value.
        if(arr[i]<=0){
            arri[len]=arr[i];
            len++;
        }
    }

    for(int i=0;i<len-1;i++)
    {
        for(int j=i;j<len;j++)
        {
            if(arri[j]<arri[i]){
                int temp = arri[i];
                arri[i] = arri[j];
                arri[j] = temp;
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
       sum += arri[i];  ///sum seals TV.
    }
    sum = sum*-1;
        printf("%d\n",sum);  ///Print sum.
    return 0;
}


#include<stdio.h>
int freq[10001];
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[arr[i]]++;
    }
    for(int i=0;i<1001;i++){
        if(freq[i]>0){
            for(int j=0;j<freq[i];j++){
                printf("%d ",i);
            }
        }
    }

}

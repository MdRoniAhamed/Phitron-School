#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int cou=0;
    for(int boublu = 0; boublu<n; boublu++){
        for(int i=0; i+1<n;i++){
            if(arr[i]>arr[i+1]){
                    cou++;
                int temp= arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
        }
//        for(int i = 0; i < n;i++){
//        printf("%d ",arr[i]);
    }
//    printf("\n");

//    }
            printf("%d\n",cou);

    for(int i = 0; i < n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

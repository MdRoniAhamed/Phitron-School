#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i< n;i++){
        scanf("%d",&arr[i]);
    }
    int cou=0;
    for(int step = 0; step < n; step++){
        int min = arr[step];
        int pos = step;
       // printf("%d %d\n",arr[step],step);

        for(int i = step;i<n;i++){
            if(arr[i]<arr[step]){
                    cou++;
                min = arr[i];
                pos = i;
                int temp = arr[step];
                arr[step] = min;
                arr[pos] = temp;
            }
        }
        }
        printf("%d\n",cou);
    for(int i=0;i< n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

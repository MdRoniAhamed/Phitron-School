#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);///size of loop.
    int number=0;
    int count=0;
    int frq[200001]={0};  ///frquence array.
    for(int j=0;j<n;j++){
      scanf("%d",&number);  ///Input size of array.
       for(int f=0;f<200001;f++){
            frq[f]=0;
        }
      for(int i=0;i<number;i++){
        int arr[i];
        scanf("%d",&arr[i]);    ///input array value.
        frq[arr[i]]++;
      }
     // printf("%d\n",frq[4]);
      for(int k=1;k<=number;k++){
        if(frq[k]>2){       ///check array value 3 time .
            printf("%d\n",k);     ///pr
            count++;
            break ;
        }
        }
        if(count==0){
        printf("-1\n");
        }
        count=0;
    }


    return 0;

}


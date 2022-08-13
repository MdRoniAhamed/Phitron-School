#include<stdio.h>
#include<string.h>

int main()
{
    int size;
    scanf("%d",&size);  ///input array size.
    int reverse[size],main[size],difference[size]; ///Declare array .
    for(int i=0;i<size;i++){
        scanf("%d",&main[i]);   ///input main array value.
    }
    for(int i = 0,j=size-1; i< size;j--,i++){ /// Main array reverse.
       reverse[i] = main[j];
    }
    for(int i = 0; i< size;i++){    ///Array differences Condition.
      if(reverse[i]>main[i]){
        difference[i] = reverse[i]-main[i];
      }
      else{
        difference[i] = main[i]-reverse[i];
      }

    }
    for(int i = 0; i< size;i++){
        printf("%d ",difference[i]);    ///Differences array print
    }


    return 0;
}


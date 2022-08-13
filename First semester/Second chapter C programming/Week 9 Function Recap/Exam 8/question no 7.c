#include<stdio.h>
#include<stdbool.h>

int is_reverse_sorted(int n,int a[])
{
    bool sorte = true;
    for(int i=0;i+1<n;i++){
        if(a[i]>a[i+1]){
            sorte = false;
        }
    }
    return sorte;
}

int count_swaps(int n,int a[]){
    int count = 0;
    for(int steps=0;steps<n;steps++){
        for(int i=steps;i<n;i++){	///array sorted loop.
            if(a[i]<a[steps]){
            count ++;
             int temp=a[steps];	///swap array value
             a[steps] = a[i];
             a[i] = temp;
            }


        }
       if(is_reverse_sorted(n,a)){
       // printf("sorted\n"); 	 //check sorted .
        break;
       }
        //  printf("hi %d\n",steps);
    }
    return count;
}

int main()
{
    int n;
    scanf("%d",&n);	///size of selection number.

    int value[n];		///value of selection number.
    for(int i=0;i<n;i++)
    {
        scanf("%d",&value[i]);	///input selection number.
    }

    int count = count_swaps(n,value); ///Call sort value.

    printf("%d\n",count);
    return 0;
}


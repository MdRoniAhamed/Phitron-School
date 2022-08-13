#include<stdio.h>
#include<stdbool.h>

int is_reverse_sorted(int n,int a[])
{
    bool sorte = true;
    for(int i=0;i+1<n;i++){
        if(a[i]<a[i+1]){
            sorte = false;
        }
    }
    if(sorte) return true;
    else return ;
}

void sort(int n,int a[]){
    for(int steps=0;steps<n;steps++){
        for(int i=steps;i<n;i++){///array sorted loop.
            if(a[i]>a[steps]){

             int temp=a[steps];///swap array value
             a[steps] = a[i];
             a[i] = temp;
            }


        }
       if(is_reverse_sorted(n,a)){
       // printf("sorted\n");//check sorted .
        break;
       }
        //  printf("hi %d\n",steps);
    }
}

int main()
{
    int n;
    scanf("%d",&n);///size of selection number.

    int value[n];///value of selection number.
    for(int i=0;i<n;i++)
    {
        scanf("%d",&value[i]);///input selection number.
    }

    sort(n,value);

    for(int i=0;i< n;i++){
        printf("%d ",value[i]);///Output selection sort number.
    }
}


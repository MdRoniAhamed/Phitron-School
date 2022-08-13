#include<stdio.h>
#include<stdbool.h>

int is_reverse_sorted(int n,int a[])
{
    bool reverse = true;
    for(int i=0;i+1<n;i++){ ///check reverse or not reverse.
        if(a[i]>a[i+1]){
            reverse = false;
        }
    }
    if(reverse) return true;  ///reverse return true .
    else return false ;       ///not reverse  return false.
}
 int main()
{
    int n;
    scanf("%d",&n); ///size of  number.

    int value[n];   ///value of  number.
    for(int i=0;i<n;i++)
    {
        scanf("%d",&value[i]);  ///input number of value.
    }

    if(is_reverse_sorted(n,value)){
        printf("True :");           ///print reverse true.
    }
    else{
        printf("False :");          ///print not reverse false.
    }


    for(int i=0; i<n; i++){
        printf("%d ",value[i]);
    }

    return 0;

}

#include<stdio.h>
#include<stdbool.h>

bool check_array(int size,int array[])   ///create check array all value.
{
    bool value = false;
    for(int i=0;i<size;i++)
    {
        if(array[i]==0){
            value = true;
            break ;
        }
    }
    return value;
}

int main()
{
    int size;
    scanf("%d",&size);  ///size of array .
    int array[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);  ///input array value.
    }
    bool value = check_array(size,array);   ///call check_array value.

    if(value==false){
        printf("YES ,The array contains all elements from 1 to %d\n",size);  ///print.
    }
    else{
        printf("NO ,The array does n't contain all elements from 1 to %d\n",size);  ///print.
    }

    return 0;
}

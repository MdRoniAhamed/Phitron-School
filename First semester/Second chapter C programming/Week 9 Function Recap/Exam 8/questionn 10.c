#include<stdio.h>
void change_array(int size,int array[],int array1[])
{
    for(int i=0,j=size-1;i<j;i++,j--){
        int temp = array[i];  ///reverse array.
        array [i] = array [j];
        array [j] = temp;
    }
    for(int i=0;i<size;i++){
        array1[i] = array[i];  //array copy.
    }

}
int main()
{
    int size=5;         ///size of array.
    int array[size];  ///int array1;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    int array1[size];  /// int array2.
    change_array(size,array,array1); ///Call array reverse function.
    for(int i=0;i<size;i++){
        printf("%d ",array1[i]);  ///print array reverse value.
    }

    return 0;
}

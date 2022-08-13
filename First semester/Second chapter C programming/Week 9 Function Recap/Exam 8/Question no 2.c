#include<stdio.h>

float make_average(int size,int array[])
{
    int sum;
    for(int i=0;i<size;i++)
    {
      sum+=array[i];
    }
    float average =( float) sum /(float) size ; ///average value.
    return average;
}
int main()
{
    int size;
    scanf("%d",&size);  //input size of array.
    int array[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]); ///Input array value.
    }

    float average = make_average(size,array); // call average function .
    printf("%f\n",average);  // print average value.
    return 0;
}

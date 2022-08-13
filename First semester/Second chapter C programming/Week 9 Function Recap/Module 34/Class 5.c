#include<stdio.h>
#include<stdbool.h>

void sort(int size,int arr[])
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void copy(int ar[],int b[],int n)
{
    for(int i=0;i<n;i++)
    {
        b[i]=ar[i];
    }
}
bool is_sorted(int arr[],int size)
{
    int b[size];
    copy(arr,b,size);
    sort(size,b);
    for(int i=0;i<size;i++)
    {
        if(b[i]!=arr[i])
        {
            return false;
        }
    }
    return true;


}
int main()
{
    int size = 5;
    int array[size] ;
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
   bool ans = is_sorted(array,size);

   if(ans)
   {
       printf("YES");
   }
   else{
    printf("NO");
   }

    return 0;
}

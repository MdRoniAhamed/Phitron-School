#include<bits/stdc++.h>
using namespace std ;
void PrintArray(int size, int array[])
{
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
//    cout<<endl;
}
int array_max(int size,int array[])
{
    int value=0;
    for(int i=0 ; i<size; i++)
    {
        value = max(value,array[i]);
    }
    return value;
}
void add_count(int size,int array[],int count[])
{
    for(int i=0; i<size; i++)
    {
        count[array[i]]++;
    }
}
void array_prifix_sum(int size,int count[])
{
    for(int i=1; i<size; i++)
    {
        count[i] +=count[i-1];
    }
}
void counting_sort(int max,int size,int array[],int count[],int Final[])
{
    for(int i=size-1; i>=0; i--)
    {
        cout<<size-i<<"st Step : ";
        count[array[i]]--;
        PrintArray(max,count);
        int index = count[array[i]];
        Final[index]=array[i];
        cout<<"-> ";
        PrintArray(size,Final);
        cout<<endl;


    }
}
void frquence_value(int size,int array[])
{
    for(int i=0; i<size; i++)
    {
        if(array[i]>0) cout<<"value: "<<i<<" -> count value: "<<array[i]<<endl;
    }
    cout<<"Frquence: ";
    PrintArray(size,array);
    cout<<endl;
}
int main()
{
    int size=8;
    int array[8]= {7,2,9,2,7,4,5,1};
    cout<<"Example array : " ;
    PrintArray(size,array);

    int max = array_max(size,array);
    cout<<endl<<endl<<"Example array max value : "<<max<<endl<<endl;
    int *count = (int*) calloc(max+1,sizeof(int));

    cout<<"Frquence array count value : "<<endl ;
    add_count(size,array,count);
    frquence_value(max+1,count);

    array_prifix_sum(max+1,count);
    cout<<endl<<"Array Prifix sum : "<<endl;;
    PrintArray(max+1,count);
    cout<<endl;

    int Final[size]= {0};

    cout<<endl<<"Counting Array sorting step: "<<endl;
    counting_sort(max+1,size,array,count,Final);
    cout<<endl;
    cout<<"Sorted array: ";
    PrintArray(size,Final);
    cout<<endl;

}

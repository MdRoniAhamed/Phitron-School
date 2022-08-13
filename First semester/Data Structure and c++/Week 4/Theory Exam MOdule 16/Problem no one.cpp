#include<bits/stdc++.h>
using namespace std;

void PrintArray(int size, int array[])
{
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
}

void print_step(int size,int array[],int j)
{
    cout<<j+1<<"st step: ";
    PrintArray(size,array);
    cout<<"-> ";
}
void Bubble_sort(int size, int array[])
{
    for(int i=1; i<size; i++)
    {
        cout<<i<<"st iteration: \n";
        for(int j=0; j<size-i; j++)
        {
            print_step(size,array,j);
            if(array[j]>array[j+1])
            {
                int temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;

            }
            PrintArray(size,array);
            cout<<endl;
        }
    }
}

int main()
{
    int size=6;
    int array[size]={ 7, 2 ,13, 2, 11, 4};
    cout<<"Unsorted Array: ";
    PrintArray(size,array);
    cout<<endl;
    Bubble_sort(size,array);
    cout<<"Sorted Array: ";
    PrintArray(size,array);

}

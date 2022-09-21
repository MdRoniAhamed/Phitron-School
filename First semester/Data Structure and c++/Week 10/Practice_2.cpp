#include<bits/stdc++.h>
using namespace std;
void heapify(int array[],int size, int current);
void Print_array(int array[],int size);

void heapify(int array[], int size, int current)
{
    int largest = current;
    int left_child = (current * 2) + 1;
    int right_child = (current * 2) + 2;

    if (size > left_child && array[left_child] > array[largest])
    {
        largest = left_child;
    }

    if (size > right_child && array[right_child] > array[largest])
    {
        largest = right_child;
    }
    if (largest != current)
    {
        swap(array[largest], array[current]);
        heapify(array, size, largest);
    }
}

void Print_array(int array[],int size)
{
    cout<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int size;
    cin>>size;
    int array[size];
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    int Non_leaf_start = (size/2)-1;
    for(int i=Non_leaf_start ; i>=0; i--)
    {
        
    }

    return 0;
}
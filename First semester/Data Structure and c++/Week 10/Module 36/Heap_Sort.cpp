#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int array[], int n, int current)
{
    int largest = current;
    int left_child = 2 * current + 1;
    int right_child = 2 * current + 2;

    if (left_child < n && array[left_child] < array[largest])
    {
        largest = left_child;
    }
    if (right_child < n && array[right_child] < array[largest])
    {
        largest = right_child;
    }

    if (largest != current)
    {
        swap(array[largest], array[current]);
        heapify(array, n, largest);
    }
}

void print_array(int array[], int n)
{
    // cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void heap_sort(int array[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        cout<<"Iteration heap: "<<array[0] <<" "<<array[i]<<endl;
        swap(array[0], array[i]);
        heapify(array, i, 0);
        cout<<size-i<<"st iteration: ";
        print_array(array,size);
    }
}

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "Before Heapify: ";
    print_array(array, n);
    int Non_Leaf_start = (n / 2) - 1;

    for (int i = Non_Leaf_start; i >= 0; i--)
    {
        heapify(array, n, i);
    }
    cout << "After Heapify: ";
    print_array(array, n);

    heap_sort(array,n);

    cout << "After Heap Sort: ";
    print_array(array, n);
    return 0;
}

/*
9
2 10 1 5 4 8 3 8 7

6
20 50 40 5 30 15

*/
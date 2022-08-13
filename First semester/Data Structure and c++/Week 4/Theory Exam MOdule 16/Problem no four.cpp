#include<bits/stdc++.h>
using namespace std;
void PrintArray(int size,int array[])
{
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
}

void Insertion_sort(int size,int array[])
{
    for(int i=1; i<size; i++)
    {
        cout<<endl<<i<<"st iteration: \n";
        int temp=array[i];
        int j=i-1;
        while(temp<array[j]&&j>=0)
        {
            cout<<(i-j)<<"st step: ";
            PrintArray(size,array);
            array[j+1] = array[j];
            j--;
            cout<<"-> ";
            PrintArray(size,array);
            cout<<endl;
        }
        cout<<(i-j)<<"st step: ";
        PrintArray(size,array);
        cout<<"-> ";
        array[j+1] = temp;
        PrintArray(size,array);

        cout<<endl;
    }
}
int main()
{
    int size=6;
    int array[size]= {5,1,3,8,2,2};

    cout<<endl<<endl<<"Unsorted Array: ";
    PrintArray(size,array);
    cout<<endl;
    Insertion_sort(size,array);

    cout<<endl<<"Sort Array: ";
    PrintArray(size,array);

    cout<<endl<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int array[size];
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }

    int target;
    cin>>target;

    int left = 0, right = size - 1;
    bool found = false;
    while(left<=right)
    {
        int mid = (left + right)/2;
        if(array[mid]==target)
        {
            cout<<"Found at Index "<<mid<<endl;
            found = true;
            break;
        }
        if(target<array[mid])
        {
            right = mid-1;
        }
        else
        {
            left = mid +1;
        }
    }
    if(!found)
    {
        cout<<"NOT FOUND"<<endl;
    }

    return 0;
}

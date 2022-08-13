#include<bits/stdc++.h>
using namespace std;
void print_array(int n, int array[])
{
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<" "  ;
    }
    cout<<endl;
}
void array_reverse(int n,int array[])
{
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        cout<<i<<"Indez"<<j<<endl;
    }

}
int main()
{
    int n;
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    array_reverse(n,array);
    print_array(n,array);
    return 0;
}

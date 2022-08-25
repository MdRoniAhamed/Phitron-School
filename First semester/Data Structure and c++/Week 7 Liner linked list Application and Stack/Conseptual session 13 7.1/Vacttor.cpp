#include<bits/stdc++.h>
using namespace std;
#include<vector>
//iterator -  begin(), end(), rbegin(),rend()
//Capacity-> size(), max_size(),capacity(),empty(),resize(),shink_to_fit()
//Element access -[], at(),front(),back(),
//Modifiers - assign(),push_back(),pop_back(),insert(),erase(),clear(),swap()

void Print_vector(vector<int> v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" " ;
    }
    cout<<endl;
}

int main()
{
    vector<int> v;

    v.push_back(45);
    v.push_back(50);
    v.push_back(60);
Print_vector(v);

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.max_size()<<endl;

    return 0;
}

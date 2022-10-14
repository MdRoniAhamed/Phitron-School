#include<bits/stdc++.h>
using namespace std;

/* 1. Iterators --> begin(), end(), rbegin(), rend()
// 2. Capacity --> size(), max_size(), capacity(), empty(), resize(), shrink_to_fit()
   3. Element access --> [], at(), front(), back()
   4. Modifiers --> assign(), push_back(), pop_back(), insert(), erase(), clear(), swap()

 */

/* 
vector<int> v;
 1. vector check size => v.size(); 
 2. vector check capacity => v.capacity(); 
 2. max element daron khomota check ==> v.max_size(); 
 3. resize vector ==> v.resize(4); 
        v.shrink_to_fit();
 
 */

void Print(vector<int> v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i] <<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    v.push_back(100);
    v.push_back(300);
    v.push_back(500);
    v.push_back(600);
    v.push_back(588);
    v[6] = 800;
    v.resize(3);
    v.shrink_to_fit();
    Print(v);

    /// 25: 00 minute video dekse. 



    return 0;
}
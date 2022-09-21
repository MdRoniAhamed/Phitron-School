#include<bits/stdc++.h>
using namespace std;
int main()
{
   priority_queue<int> pq;
   pq.push(21);
   pq.push(33);
   pq.pop();
   pq.push(12);
   pq.push(21);
   while(!pq.empty())
   {
    cout<<pq.top()<<endl;
    pq.pop();
   }
}
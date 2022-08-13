#include<bits/stdc++.h>
using namespace std;
void fun(int** x)
{
   **x=8000;
}
int main()
{
    int x=20;
    int *p=&x;
    int **q=&p;
    fun(q);
    cout<<x<<endl;
    return 0;
}

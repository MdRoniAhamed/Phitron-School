#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[3]={0},i=0;
    if(n!=100){
         while(n%10!=0)
    {
        array[i] = n%10;
        n /=10;
        i++;
    }
    if(array[0]!=array[2])
    {
        cout<<"No" <<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }

    }
    else cout<<"No"<<endl;

    return 0;
}


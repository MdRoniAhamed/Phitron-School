#include<bits/stdc++.h>
using namespace std;
void Display(int size, int array[])
{
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<endl;
    }
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ar[a],arr[b],array[c];
    for(int i=0; i<a; i++)
    {
        cin>>ar[i];
        if(i!=0)
        {
            ar[i] += ar[i-1];
        }
    }
    for(int i=0; i<b; i++)
    {
        cin>>arr[i];
        if(i!=0)
        {
            arr[i] += arr[i-1];
        }
    }
    for(int i=0; i<c; i++)
    {
        cin>>array[i];
        if(i!=0)
        {
            array[i] += array[i-1];
        }
    }
    int s=ar[a-1],u=arr[b-1],m= array[c-1];
    int i=0;
    while(s!=u&&u!=m)
    {
        if(a>i)
        {
            if(s>u||s>m)
            {
                s -= ar[i];
                if(s==u&&u==m) break;
            }
        }

        if(b>i)
        {
            if(u>m||u>s)
            {
                u -= arr[i];
                if(s==u&&u==m) break;
            }

        }

        if(c>i)
        {
            if(m>s||m>u)
            {
                m -=array[i];
                if(s==u&&u==m) break;
            }
        }

        if(s==u&&u==m) break;
        if(s==0||u==0||m==0);
        i++;
    }
    cout<<s<<endl;
//    Display(c,array);


    return 0;
}


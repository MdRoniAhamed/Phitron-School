#include<bits/stdc++.h>
using namespace std;
class Example
{
private:
    int x;
    int pass;
public:
    Example(int p)
    {
        pass=p;
    }
    void  setter(int a,int p)
    {
        if(pass==p)
        {
        x=a;
        }
        else{
            cout<<"Password didn't match "<<endl;
        }
    }
    int getter(int p)
    {
        if(pass==p){
            return x;
        }
        else{
         cout<< "Password didn't match."<<endl;
         return 0;
        }

    }

};
int main()
{
    Example a(1234);
    a.setter(1500,1235);


    cout<<a.getter(1234)<<endl;

    return 0;
}


#include<bits/stdc++.h>
using namespace std;
class Example
{
public:
    int add(int a,int b)
    {
        cout<<"First one"<<endl;
        return a+b;
    }
    double add(double a,double b)
    {
        cout<<"Second one"<<endl;
        return a+b;
    }
    char add(char a)
    {
        cout<<"HI"<<a<<endl;
        return a;
    }
};
int main()
{
    Example ex;
    cout<<ex.add('z')<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
class Parent
{
public:
    void fun()
    {
        cout<<"Parent"<<endl;


    }

};
class Child: public Parent
{
public:
    void fun()
    {
        cout<<"Chid"<<endl;
    }

};
int main()
{
    Parent pt;
    Child obj;
    obj.fun();
    pt.fun();
    return 0;
}

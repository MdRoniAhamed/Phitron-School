#include<bits/stdc++.h>
using namespace std;
class Parent ///Class parent,
{
public:
    int x;
private:
    int y;
protected:
    int z;
public:
    Parent(int a,int b,int c) ///Construtor
    {
        x=a;
        y=b;
        z=c;
    }
};
class Child: public Parent  ///Inheritance .
{
public:
    int xx;
    Child(int aa,int a,int b,int c) : Parent(a,b,c)
    {
        xx=aa;
    }
    void tellme()
    {
        cout<< "Protected value: " << z<<endl;
    }

};

int main()
{
    Parent pt(10,20,30);
    Child ch(100,10,20,30);
    ch.tellme();
    cout<<ch.x<<endl;
    return 0;

}

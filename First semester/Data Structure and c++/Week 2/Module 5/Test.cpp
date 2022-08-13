#include<bits/stdc++.h>
using namespace std;
class Parent
{
private:
    int taka;
protected:
    int password;
public:
    Parent(int tk,int ps)
    {
        taka=tk;
        password = ps;
    }
    friend class Bondhu;

};
class Bondhu
{
public:
    void tellSecret(Parent * ptr)
    {
        cout<<ptr->password<<endl;
    }
};
int main()
{
    Parent pt(1500,123);
    Bondhu bondhu;
    bondhu.tellSecret(&pt);
    return 0;

}

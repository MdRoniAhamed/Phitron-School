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
    friend void tellSecret(Parent *ptr);
};

void tellSecret(Parent *ptr)
{
    cout<<ptr->taka<<" "<<ptr->password<<endl;
}
int main()
{
    Parent pt(1500,2345);

    tellSecret(&pt);
}

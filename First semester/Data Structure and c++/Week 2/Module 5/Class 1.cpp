#include<bits/stdc++.h>
using namespace std;
class Student
{
public:  ///Access modifier / specifier .
    char name[100];
    int roll;
};
int main()
{
    Student ali;
    strcpy(ali.name,"Ali Ahamed");
    ali.roll=56;

    cout<<ali.name<<" "<<ali.roll<<endl;
    return 0;
}

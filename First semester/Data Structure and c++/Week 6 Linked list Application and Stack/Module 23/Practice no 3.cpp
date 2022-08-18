#include<bits/stdc++.h>
#include "Class-2.h"
using namespace std;
int globalID = 100;
class person
{
    string name;
    int id;
    float salary;
public:
    person()
    {
        name = "";
        id = 0;
        salary = 0;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    void set_salary(float salary)
    {
        this->salary = salary;
    }

    person(string name,float salary)
    {
        set_name(name);
        set_salary(salary);
        id = globalID;
        globalID++;
    }

    string get_name()
    {
        return name;
    }

    int get_Id()
    {
        return id;
    }
    float get_salary()
    {
        return salary;
    }
    void Print()
    {
        cout<< name <<" | "<< id <<" | "<< salary <<endl;
    }
};
int main()
{


    Stack <person> st;
    person a ("Akib zaman",1080.595);
    person b ("Roni Ahamed",980.789);
    person c ("Rabbi Akanda",680.99);
    st.push(a);
    st.push(b);
    st.push(c);
//    while(!st.empty())
//    {
//        person str;
//        str = st.pop();
//        str.Print();
//    }

    person str;
    str = st.top();
    str.Print();
    return 0;
}

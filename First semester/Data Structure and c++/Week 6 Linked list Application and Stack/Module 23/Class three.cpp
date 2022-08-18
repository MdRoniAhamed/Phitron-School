#include<bits/stdc++.h>
using namespace std;
#include "Class-2.h"

int global_ID = 100;

class person
{
    string  name;
    int id;
    float salary;
public:
    person()
    {
        name = "";
        id = 0;
        salary = 0.0;
    }
    void set_Name(string name)
    {
        this->name = name;
    }
    void set_salary(float salary)
    {
        this->salary = salary;
    }
    person(string name,float salary)
    {
        set_Name(name);
        set_salary(salary);
        id = global_ID;
        global_ID++;
    }
    int get_ID(){
    return id;
    }
    string get_name()
    {
        return name;
    }
    float get_salary()
    {
        return salary;
    }
    void Print()
    {
        cout<< name << " | " << id << " | " << salary << endl;
    }
};

int main()
{
    Stack <person> st;

    person a  ("Akib Zaman", 654.6);
    person b  ("Ria Akhter", 200.6);
    person c  ("Farid Ahmed", 354.7);
    st.push(a);
    st.push(b);
    st.push(c);

//    while(!st.empty())
//    {
//        person print_obj;
//        print_obj = st.pop();
//        print_obj.Print();
//    }

    person print_obj;
    print_obj = st.top();
    print_obj.Print();


    cout<<st.size()<<endl;


    return 0;
}

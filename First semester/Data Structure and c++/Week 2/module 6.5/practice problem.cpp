#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    char section;
    int roll;
protected:
    int english_marks;
private:
    string password;
public:
    void set_maks(int marks)
    {
        english_marks = marks;
    }
    void set_password(string password)
    {
        this->password=password;
    }
    int get_maks()
    {
        return english_marks;
    }
    void update_make(string password,int marks)
    {
        if(this->password==password)
        {
            english_marks = marks;
        }
        else{
            cout<<"Password did't match !"<<endl;
        }
    }

};
int main()
{
    int n;
    cin>>n;
    Student student[n];
    int marks,roll;
    string password;
    for(int i=0; i<n; i++)
    {
        cin>>student[i].name>>student[i].section>>student[i].roll>>marks>>password;
        student[i].set_maks(marks);
        student[i].set_password(password);
    }
    cin>>roll>>marks>>password;
    bool found = true;

    for(int i=0; i<n; i++)
    {
        if(student[i].roll==roll)
        {
            found = false;
            student[i].update_make(password,marks);
        }
    }
    if(found)
    {
        cout<<"Sudent not found!"<<endl;
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        cout<<student[i].name<<" "<<student[i].section<<" "<<student[i].roll<<" "<<student[i].get_maks()<<endl;
    }
    return 0;
}


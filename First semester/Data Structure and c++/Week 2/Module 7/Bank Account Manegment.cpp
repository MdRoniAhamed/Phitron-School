#include<bits/stdc++.h>
using namespace std;
class BankAccount
{
public:
    string name;
    string address;
    int age;
    int account_id;
protected:
    int balance;
private:
    string password;
public:
    BankAccount(string name,string address,int age,string password)
    {
        this->name=name;
        this->address=address;
        this-> age = age;
        this->password = password;
        balance =0;
        this->account_id = rand()%1000000000;
        cout<<"Bank Account ID no : "<<account_id<<endl;
    }
    void add_money(string password,int taka)
    {
        if(this->password==password)
        {
            if(taka<0)
            {
                cout<< "Invalid taka"<<endl;
            }
            else
            {
                balance += taka;
                cout<<"Successful add Taka"<<endl;
                cout<<"Your Bank Balance is "<< balance<<endl;
            }
        }
        else
        {
            cout<<"Invalid password"<<endl;
        }
    }
    void withdraw_taka(string password,int taka)
    {
        if(this->password==password)
        {
            if(taka<0)
            {
                cout<<"Invalid Taka"<<endl;
            }
            else if(taka>balance)
            {
                cout<<"Insufficient balance"<<endl;
            }
            else
            {
                balance -= taka;
                cout<<"Successful withdraw Taka"<<endl;
                cout<<"Your Bank Balance is "<<balance<<endl;
            }
        }
        else
        {
            cout<<"Invalid Password."<<endl;
        }
    }
    friend class MyCash;
};
class MyCash
{
protected:
    int balance;
public:
    MyCash()
    {
        balance=0;
    }
    void add_taka_from_Bank(BankAccount *myAccount, string password,int taka)
    {
        if(myAccount->password==password)
        {
            if(taka<-0)
            {
                cout<<"Invalid Taka"<<endl;
            }
            else if(taka>myAccount->balance)
            {
                cout<<"Insufficient Balance"<<endl;
            }
            else
            {
                this->balance+=taka;
                myAccount->balance -=taka;
                cout<<"Successful TAKA Add MYCASH "<<endl;
                cout<<"MYCASH balance is " <<this->balance<<endl;
                cout<<"Bank balance is " <<myAccount->balance<<endl;
            }
        }
        else
        {
            cout<<"Invalid password"<<endl;
        }
    }
};
BankAccount *create_account()
{
    string name,address,password;
    int age;
    cout<<"CREATE BANK ACCOUNT"<<endl;
    cin>>name>>address>>age>>password;
    BankAccount *myAccount = new BankAccount(name,address,age,password);
    return myAccount;
}
void add_money(BankAccount* myAccount)
{
    string password;
    int taka;
    cout<<"ADD Taka"<<endl;
    cin>> password>> taka;
    myAccount -> add_money(password,taka);
}
void withdraw_taka(BankAccount * myAccount)
{
    string password;
    int taka;
    cout<<"Withdrow taka"<<endl;
    cin>>password>>taka;
    myAccount->withdraw_taka(password,taka);
}
void add_taka_from_Bank(MyCash * myCash,BankAccount * myAccout)
{
    string password;
    int taka;
    cout<<"Add Taka MYCASH" <<endl;
    cin>>password>>taka;
    myCash->add_taka_from_Bank(myAccout,password,taka);
}
int main()
{
    BankAccount * myAccount = create_account();
    MyCash * myCash = new MyCash();
Flag:
    cout<<"  TYPE THE CODE AND WORK" <<endl;
    cout<<"1.Add Bank TAKA" <<endl;
    cout<<"2.Withdraw Bank TAKA\n";
    cout<<"3.MYCASH ADD TAKA" <<endl;
    cout<<"0.EXEIT" <<endl;
    int option;
    cin>>option;
    if(option==1)
    {
        add_money(myAccount);
    }
    else if(option==2)
    {
        withdraw_taka(myAccount);
    }
    else if(option==3)
    {
        add_taka_from_Bank(myCash,myAccount);
    }
    else if(option==0)
    {
        return 0;
    }
    else
    {
        cout<<"Invalid option" <<endl;
    }
goto Flag;
    return 0;
}

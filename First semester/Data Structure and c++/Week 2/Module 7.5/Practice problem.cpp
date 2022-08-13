#include<bits/stdc++.h>
using namespace std;
class Shop
{
public:
    string product_name[10];
    int product_price[10];
    int product_quantity[10];
    void set_total_income(int total_income)
    {
        this->total_income+=total_income;
    }
    int get_total_income()
    {
        return total_income;
    }
private:
    int total_income;
};

int main()
{
    Shop * myshop = new Shop;
    cout<<"Number of products : ";
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"Product "<<i<<" Name: ";
        cin>>myshop->product_name[i];
        cout<<"Product "<< i<< " Price: ";
        cin>>myshop->product_price[i];
        cout<< "Product "<<i<<" Quantity: ";
        cin>>myshop->product_quantity[i];
    }
    while(true)
    {
        cout<<"\t \tBUY PRODUCT"<<endl;
        cout<<"\t\t______________"<<endl;
        cout<<"Product Index\t\t";
        for(int i=1; i<=n; i++)
        {
            cout<<i<<"\t";
        }
        cout<<endl;
        cout<<"Product Name \t\t";
        int i=1;
        while(i<=n)
        {
            cout<<myshop->product_name[i]<<"\t";
            i++;
        }
        cout<<endl;
        i=1;
        cout<<"Product Price\t\t";
        while(i<=n)
        {
            cout<<myshop->product_price[i]<<"\t";
            i++;
        }
        cout<<endl<<"Product Quantity\t";
        i=1;
        while(i<=n)
        {
            cout<<myshop->product_quantity[i]<<"\t";
            i++;
        }
        cout<<endl<<"Which product do you want? From 1 to "<<n<<": ";
        int index,quantity;
        cin>>index;
        cout<<"What is the quantity that you want of "<<myshop->product_name[index]<<": ";
        cin>>quantity;
        if(myshop->product_quantity[index]<quantity||quantity<0)
        {
            cout<<"This quantity is not available"<<endl;
        }
        else
        {
            cout<<endl<<myshop->product_name[index]<<" bought "<<quantity<<" pc successfully"<<endl;
            myshop->product_quantity[index] -=quantity;
            int total_income=0;
            total_income = quantity*myshop->product_price[index];
            myshop->set_total_income(total_income);
            cout<<"Your total income : "<<myshop->get_total_income()<<endl<<endl;
        }
    }
    return 0;
}

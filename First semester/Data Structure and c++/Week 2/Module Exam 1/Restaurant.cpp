#include<bits/stdc++.h>
using namespace std;
class Restaurant
{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    void set_total_tax(float TEX)
    {
        total_tax+=TEX;
        //cout<<"Total TXT\t:"<<total_tax<<endl;
    }
private:
    float total_tax;
};
void create_manue(Restaurant * restaurant,int n)
{
    for(int i=0; i<n; i++)
    {
        int codes;
        string name;
        int prices;
        cin>>codes;
        restaurant->food_item_codes[i]=codes;
        cin.get();
        getline(cin,name);
        // cout<<" Hello " <<name<<endl;
        restaurant->food_item_names[i]=name;
        cin>>prices;
        restaurant->food_item_prices[i]=prices;
    }
}
int main()
{
    Restaurant * restaurant = new Restaurant;
    bool found = true;

    int n;
    cin>>n;
    create_manue(restaurant,n);
    cout<<" \t\t\tMAKE BILL"<<endl;
    cout<<" \t\t_____________________" <<endl;
    cout<<"Item Code\tItem Name\t\t\tItem Price"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<restaurant->food_item_codes[i]<<"\t\t"<<restaurant->food_item_names[i]<<"\t\t"<<restaurant->food_item_prices[i]<<endl;
    }
    cout<<endl<<endl;
    int table=0,items;
    while(true)
    {
        table=0,items=0;
        cout<<"Enter Table No: ";
        cin>>table;
        cout<<"Enter Number of Items : ";
        cin>>items;
        int codes[items],quantity[items];
        for(int i=0; i<items; i++)
        {
            cout<<"Enter Item " <<i+1<<" Code : ";
            cin>>codes[i];
            for(int j=0;j<n;j++)
            {
                if(codes[i]==restaurant->food_item_codes[j])
                {
                    found = false;
                }
            }
            if(found)
            {
                cout<<"Code is not valid. He/She needs to enter the code again : ";
                cin>>codes[i];
            }
            cout<<"Enter Item " <<i+1<<" Quantity : ";
            cin>>quantity[i];
        }
        int t=0;
        cout<<"\t\t\tBILL SUMMARY" <<endl;
        cout<<"\t\t_____________________"<<endl;
        cout<<"Table No. : "<<table<<endl;
        cout<<"Item code\tItem Name\t\tItem Price\tItem Quantity\tTotal Price"<<endl;
        int sum=0;
        float items_total_price=0;

        while(t<items)
        {
            for(int i=0; i<n; i++)
            {
                int item_sum=0;
                if(codes[t]==restaurant->food_item_codes[i])
                {
                    item_sum = restaurant->food_item_prices[i]*quantity[t];
                    sum+=item_sum;
                    cout<<restaurant->food_item_codes[i]<<"\t\t"<<restaurant->food_item_names[i]<<"\t";
                    cout<<restaurant->food_item_prices[i]<<"\t\t"<<quantity[t]<<"\t\t"<<item_sum<<endl;
                    items_total_price+=item_sum;
                }

            }

            t++;
        }
        float tex = (float)sum/100*5;
        items_total_price+=tex;
        cout<<"TAX\t\t\t\t\t\t\t\t\t"<<tex<<endl;
        cout<<"_______________________________________________________________________________________"<<endl;
        cout<<"NET TOTAL\t\t\t\t\t\t\t\t"<<items_total_price<<"\tTAKA"<<endl;
        restaurant->set_total_tax(tex);

    }
    return 0;
}

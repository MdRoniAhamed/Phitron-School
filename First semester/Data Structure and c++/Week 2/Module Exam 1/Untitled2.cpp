//#include<bits/stdc++.h>
//using namespace std;
//class Restaurant
//{
//public:
//    int food_item_codes[12];
//    string food_item_names[12];
//    int food_item_prices[12];
//    void set_total_tax(float TEX)
//    {
//        total_tax+=TEX;
//        // cout<<"Total TXT\t:"<<total_tax<<endl;
//    }
//    Restaurant()
//    {
//        total_tax=0;
//        // cout<<total_tax<<endl;
//    }
//private:
//    float total_tax;
//};
//int main()
//{
//    Restaurant * restaurant = new Restaurant;
//    bool found = true;
//
//    int n;
//    cin>>n;
//    for(int i=0; i<n; i++)
//    {
//        int codes;
//        string name;
//        int prices;
//        cin>>codes;
//        restaurant->food_item_codes[i]=codes;
//        cin.get();
//        getline(cin,name);
//        // cout<<" Hello " <<name<<endl;
//        restaurant->food_item_names[i]=name;
//        cin>>prices;
//        restaurant->food_item_prices[i]=prices;
//    }
//
//
//    while(true)
//    {
//        cout<<endl<<endl;
//        cout<<" \t\t\tMAKE BILL"<<endl;
//        cout<<" \t\t_____________________" <<endl;
//        cout<<"Item Code\tItem Name\t\t\tItem Price"<<endl;
//        for(int i=0; i<n; i++)
//        {
//            cout<<restaurant->food_item_codes[i]<<"\t\t"<<restaurant->food_item_names[i]<<"\t\t"<<restaurant->food_item_prices[i]<<endl;
//        }
//        cout<<endl<<endl;
//        int table=0,items;
//        cout<<"Enter Table No: ";
//        cin>>table;
//        cout<<"Enter Number of Items: ";
//        cin>>items;
//        int codes[items],quantity[items];
//        cout<<endl;
//        for(int i=0; i<items; i++)
//        {
//            cout<<"Enter Item " <<i+1<<" Code : ";
//            cin>>codes[i];
//            for(int j=0; j<n; j++)
//            {
//                if(codes[i]==restaurant->food_item_codes[j])
//                {
//                    found = false;
//                }
//            }
//            if(found)
//            {
//                cout<<"Code is not valid. They need to enter the code again: ";
//                cin>>codes[i];
//            }
//            cout<<"Enter Item " <<i+1<<" Quantity : ";
//            cin>>quantity[i];
//        }
//        cout<<endl<<endl<<endl;
//        int t=0;
//        cout<<"\t\t\tBILL SUMMARY" <<endl;
//        cout<<"\t\t_____________________"<<endl;
//        cout<<"Table No. : "<<table<<endl;
//        cout<<"Item code\tItem Name\t\tItem Price\tItem Quantity\tTotal Price"<<endl;
//        int sum=0;
//        float items_total_price=0;
//
//        while(t<items)
//        {
//            for(int i=0; i<n; i++)
//            {
//                int item_sum=0;
//                if(codes[t]==restaurant->food_item_codes[i])
//                {
//                    item_sum = restaurant->food_item_prices[i]*quantity[t];
//                    sum+=item_sum;
//                    cout<<restaurant->food_item_codes[i]<<"\t\t"<<restaurant->food_item_names[i]<<"\t";
//                    cout<<restaurant->food_item_prices[i]<<"\t\t"<<quantity[t]<<"\t\t"<<item_sum<<endl;
//                    items_total_price+=item_sum;
//                }
//
//            }
//
//            t++;
//        }
//        float tex = (float)sum/100*5;
//        items_total_price+=tex;
//        cout<<"TAX\t\t\t\t\t\t\t\t\t"<<tex<<endl;
//        cout<<"_______________________________________________________________________________________"<<endl;
//        cout<<"NET TOTAL\t\t\t\t\t\t\t\t"<<items_total_price<<"\tTAKA"<<endl;
//        restaurant->set_total_tax(tex);
//
//    }
//    return 0;
//}
//
//
//
#include<bits/stdc++.h>
using namespace std;

class Resturant{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    int total_tax;
    Resturant(){
        total_tax = 0;
    }
};

int main(){
    int n;
    cin >> n;
    Resturant res[n];
    bool found = true;

    for(int i = 0; i < n; i++){
        int food_codes, food_prices;
        string food_names;
        cin >> food_codes;
        fgetc(stdin);
        getline(cin, food_names);
        cin >> food_prices;



        res[i].food_item_codes[i] = food_codes;
        res[i].food_item_names[i] = food_names;
        res[i].food_item_prices[i] = food_prices;
    }

    cout << "\t\t\t MAKE BILL" << endl;
    cout << "\t\t ------------------------- " << endl;
    cout << "Item Code";
    cout <<"\t\t Item Name";
    cout <<"\t\t\t Item Price" << endl;

    for(int i=0; i<n; i++){
        cout  << res[i].food_item_codes[i];
        cout << "\t\t\t" << res[i].food_item_names[i];
        cout << "\t\t\t" << res[i].food_item_prices[i] << endl;
    }

    while(true){
        int table, items;
    cout << "Enter Table No : ";
    cin >> table;
    cout << "Enter Number of items: ";
    cin >> items;
    int code[items], quantity[items];
    for(int i=1; i<=items; i++){
        cout << "Enter Item " << i << " Code : ";
        cin >> code[i];
        for(int j = 0; j < n; j++){
            if(res[j].food_item_codes[j] == code[i]){
                found = false;
            }
        }

if(found)
        {
            cout<<"Code is not valid. Please try another code: ";
            cin>>code[i];
        }
        cout << "Enter Item " << i << " quantity : ";
        cin >> quantity[i];
    }

    cout << "\t\t\t BILL SUMMARY" << endl;
    cout << "\t\t-------------------------------" << endl;
    cout << "Table No. :" << table << endl;
    cout << "Item Code";
    cout << "\t\t Item Name";
    cout << "\t Item Price";
    cout << "\t Item Quantity";
    cout << "\t Total Price" << endl;

    int total_price = 0;
    for(int i = 0; i <= items; i++){
        for(int j = 0; j < n; j++){
            if(res[j].food_item_codes[j] != code[i]){
                continue;
            }
            if(res[j].food_item_codes[j] == code[i]){
                int product_price = res[j].food_item_prices[j] * quantity[i];
                total_price += product_price;
                cout << code[i];
                cout << "\t\t" << res[j].food_item_names[j];
                cout << "\t\t" << res[j].food_item_prices[j];
                cout << "\t\t" << quantity[i];
                cout << "\t\t" << product_price << endl;
            }
        }
    }
    int tax = (5*total_price) / 100;
    res[0].total_tax = tax;
    cout << "TAX";
    cout <<"\t\t\t\t\t\t\t\t\t\t" << res[0].total_tax << endl;
    cout << "--------------------------------------------------------------------------------------------------" << endl;
    cout << "NET TOTAL";
    cout <<"\t\t\t\t\t\t\t\t\t" << total_price + res[0].total_tax << " TAKA" << endl;
    }
    return 0;
}

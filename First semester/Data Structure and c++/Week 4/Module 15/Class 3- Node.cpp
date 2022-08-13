#include<bits/stdc++.h>
using namespace std;

class Roni
{
public:
    int value;
    Roni * Nex;
};
void display(Roni* n)
{
    while(n!=NULL)
    {
        cout<<n->value<<endl;
        n = n->Nex;
    }
}
int main()
{
    Roni * head = new Roni();
    Roni * second = new Roni();
    Roni * third = new Roni();

    head -> value = 3;
    second -> value = 6;
    third -> value = 45;

    head->Nex=second;
    second->Nex=third;
    third->Nex=NULL;
    display(head);


}

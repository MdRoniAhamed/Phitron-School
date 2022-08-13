#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node * Next;
};
void Display_Linked(Node * head)
{
    Node * Temp = head;
    while(Temp!=NULL)
    {
        cout<<Temp->value<<" ";
        Temp=Temp->Next;
    }
    cout<<endl;

}
int main()
{
    Node * head = new Node;
    Node * second = new Node;
    Node * third = new Node;
    Node * fourth = new Node;

    head-> value = 87;
    second -> value = 88;
    third -> value = 89;
    fourth->value= 90;

    head->Next=second;
    second->Next=third;
    third->Next=fourth;
    fourth->Next=NULL;

    Display_Linked(head);
}

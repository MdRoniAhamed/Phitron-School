#include<bits/stdc++.h>
using namespace std;
class Palindrome
{
public:
    char ch;
    Palindrome * next;
    Palindrome(char ch)
    {
        this->ch = ch;
        next = NULL;
    }
};

void Display(Palindrome * head)
{
    if(head==NULL)
    {
        cout<<"NOT Found value"<<endl;
        return;
    }
    while(head!=NULL)
    {
        cout<<head->ch<<" ";
        head = head->next;
    }
    cout<<endl;
}

void Add_Palindrome(Palindrome* &head,char ch)
{
    Palindrome * newNode = new Palindrome(ch);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Palindrome * temp = head;

    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

Palindrome* Reverse_Palindrome(Palindrome* & head)
{
    ///This is our base Call.
    if(head==NULL||head->next==NULL)
    {
        if(head==NULL) cout<<"Linked list is Empty "<<endl;
        return head;
    }
    /// Recursive Call
    Palindrome* newHead = Reverse_Palindrome(head->next);
    head->next->next = head;
    head->next=NULL;
    return newHead;
}

void Palindrome_check(Palindrome * head,Palindrome * Tail)
{
    if(head==NULL)
    {
        cout<<"Value Not Found"<<endl;
    }
    while(head!=NULL)
    {
        if(head->ch!=Tail->ch)
        {
            cout<<"False"<<endl;
            cout<<head->ch<<" "<<Tail->ch<<endl;
            return;
        }
        head = head->next;
        Tail = Tail->next;
    }
    cout<<"True"<<endl;
    }


int main()
{
    Palindrome * head = NULL;
    Palindrome * Tail = NULL;
    int size;
    cin>>size;
    char ch;
    for(int i=0; i<size; i++)
    {
        cin>>ch;
        Add_Palindrome(head,ch);
        Add_Palindrome(Tail,ch);

    }
    head = Reverse_Palindrome(head);
    Palindrome_check(head,Tail);
    Display(head);
    Display(Tail);

}

#include<bits/stdc++.h>
using namespace std;
class dobleyNode ///Create Doubly linked list.
{
public:
    int value;
    dobleyNode * Next;
    dobleyNode * prev;

    dobleyNode(int value)
    {
        this->value=value;
        Next = NULL;
        prev = NULL;
    }
};

void Display(dobleyNode * head);  ///Show Display all value.
void Insertion_at_Head(dobleyNode*&head,int value);  ///Head value add.
void Insertion_at_Tail(dobleyNode*&head,int value);  ///Tail value add.
int counting_the_size(dobleyNode* &head);
int search_a_value_unique_list(dobleyNode*head,int value);
void Insertion_at_specific_posetion(dobleyNode*&head,int position,int value);
void Exam_Display(dobleyNode * head,int position,int size);

void Insertion_at_Head(dobleyNode*&head,int value)
{
    dobleyNode * add_tail = new dobleyNode(value);  ///Create new linked list ADD_Tail.

    if(head==NULL)
    {
        head = add_tail;
        return ;
    }
    dobleyNode * temp = head;
    add_tail->Next = temp;
    temp->prev = add_tail;
    head = add_tail;
}

void Insertion_at_Tail(dobleyNode*&head,int value)
{
    dobleyNode * add_tail = new dobleyNode(value);       ///Create new linked list ADD_Tail.

    if(head==NULL)
    {
        head = add_tail;
        return ;
    }
    dobleyNode * temp = head;
    while(temp->Next!=NULL)
    {
        temp = temp->Next;
    }
    temp->Next = add_tail;
    add_tail->prev = temp;
}

void Display(dobleyNode * head)   ///Linked list Display.
{
    if(head==NULL)
    {
        cout<<"Value NOT Found"<<endl;
        return;
    }
    while(head!=NULL)
    {
        cout<<head->value;
        head= head->Next;
        if(head!=NULL)
            cout<<"->";
    }
    cout<<endl;
}

int counting_the_size(dobleyNode* &head)   ///Counting the size.
{
    dobleyNode * temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        count ++;
        temp = temp->Next;
    }
    return count;
}

void Insertion_at_specific_posetion(dobleyNode*&head,int position,int value)
{
    dobleyNode * newNode = new dobleyNode(value);
    dobleyNode * temp = head;
    int count = counting_the_size(head);
    if(count+1<position||position<1)
    {
        cout<<" Position invalid " <<endl;
        return ;
    }
    if(position==1)
    {
        Insertion_at_Head(head,value);
        return;
    }
    int i=1;
    while(position-1>i)
    {
        temp = temp->Next;
        i++;
    }
    dobleyNode * tem = temp->Next;
    if(count+1 !=position) tem->prev = newNode;
    newNode->Next = tem;
    newNode->prev= temp;
    temp->Next = newNode;
}

int search_a_value_unique_list(dobleyNode*head,int value)
{
    int count = 0;

    while(head!=NULL)
    {
        count++;
        if(head->value==value) return count;

        head = head->Next;
    }
    return count=0;
}

void Exam_Display(dobleyNode * head,int position,int size)        ///conditional Display.
{
    int count = search_a_value_unique_list(head,position);

    for(int i=1; i<count; i++)
    {
        head = head->Next;
    }
    if(count==size)
    {
        cout<<head->prev->value<<" "<<0<<endl;       ///Size equal position.
        return;
    }
    if(count==1)
    {
        cout<<0<<" "<<head->Next->value<<endl;         ///Size equal one.
        return;
    }
    cout<<head->prev->value<<" "<<head->Next->value<<endl;      ///Any position.
}

int main()
{
    dobleyNode * head = NULL;       ///Create Doubly linked list.
    int n;
    cin>>n;         /// Input linked list size.
    for(int i=1; i<=n; i++)
    {
        int a,b;
        cin>>a>>b;      ///Input linked list value.
        int h =  search_a_value_unique_list(head,i);
        if(h==0) Insertion_at_Head(head,i);     ///Add linked list value.
        if(a>0)
        {
            int c = search_a_value_unique_list(head,i);
            int m = search_a_value_unique_list(head,a);
            if(m==0)  ///Check A unique .
            {
                if(c==1) Insertion_at_Head(head,a);             ///Add linked list value. call by head,

                /// c = position. a = value. head = linked list.
                else Insertion_at_specific_posetion(head,c,a);   ///Called by Specific Position value add.
            }
        }
        if(b>0)
        {
            int c =  search_a_value_unique_list(head,i);
            int m =  search_a_value_unique_list(head,b);
            if(m==0)        ///Check B Unique.
            {
                /// c = position. b = value. head = linked list.
                Insertion_at_specific_posetion(head,c+1,b);     ///Add linked list value.
            }
        }
    }

    cout<<endl<<endl;
    for(int i=1; i<=n; i++)
    {
        Exam_Display(head,i,n);     ///Exam Condition Display.
    }

    return 0;
}

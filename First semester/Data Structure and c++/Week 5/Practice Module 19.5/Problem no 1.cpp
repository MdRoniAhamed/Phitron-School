
#include<bits/stdc++.h>
using namespace std;
class dobleyNode
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

struct Position
{
    int index[1000];
};
void Display(dobleyNode * head);
void Insertion_at_Head(dobleyNode*&head,int value);
void Insertion_at_Tail(dobleyNode*&head,int value);
int counting_the_size(dobleyNode* &head);
int search_a_value_unique_list(dobleyNode*head,int value);
void Insertion_at_specific_posetion(dobleyNode*&head,int position,int value);
Position search_a_value_duplicate_list(dobleyNode * head,int value);
void Insertion_a_specific_value(dobleyNode *&head,int value,int val);
void Insertion_duplicate_specific_value(dobleyNode*&head,int value,int val);
void Deletion_at_Head(dobleyNode*&head);
void Deletion_at_Tail(dobleyNode*&head);
void Deletion_at_specific_position(dobleyNode * &head,int position);
void Deletion_a_value(dobleyNode*&head,int value);
void Deletion_duplicate_value(dobleyNode*&head,int value);



void Insertion_at_Head(dobleyNode*&head,int value)
{
    dobleyNode * add_tail = new dobleyNode(value);

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
    dobleyNode * add_tail = new dobleyNode(value);

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

void Display(dobleyNode * head)
{
    if(head==NULL)
    {
        cout<<"Value NOT Found"<<endl;
        return;
    }
    while(head->Next!=NULL)
    {
        cout<<head->value<<"-->";
        head= head->Next;
    }
    cout<<head->value<<endl;
    while(head!=NULL)
    {
        cout<<head->value;
        head= head->prev;
        if(head!=NULL)
        {
            cout<<"-->";
        }
    }
    cout<<endl;
}

int counting_the_size(dobleyNode* &head)
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
//    if(head==NULL)
//    {
//        return count;
//    }
    while(head!=NULL)
    {
        count++;
        if(head->value==value) return count;

        head = head->Next;
    }
    return count=0;
}

Position search_a_value_duplicate_list(dobleyNode * head,int value)
{
    Position T;
    int i=1,count=1;
    while(head!=NULL)
    {
        if(head->value==value)
        {
            T.index[count] = i;
            count++;
        }
        i++;
        head = head->Next;

    }
    T.index[0] = count;
    return T;
}

void Insertion_a_specific_value(dobleyNode *&head,int value,int val)
{
    int posi = search_a_value_unique_list(head,value);

    Insertion_at_specific_posetion(head,posi+1,val);
}

void Insertion_duplicate_specific_value(dobleyNode*&head,int value,int val)
{
    Position T;
    T = search_a_value_duplicate_list(head,value);
    if(T.index[0]>1)
    {
        for(int i=1; i<T.index[0]; i++)
        {
            Insertion_at_specific_posetion(head,T.index[i]+i,val);
        }
    }
    else
    {
        cout<<"Value Not Found " <<endl;
    }

}

void Deletion_at_Head(dobleyNode*&head)
{
    if(head==NULL)
    {
        return ;
    }
    head = head->Next;
    if(head!=NULL)
        head->prev=NULL;
}

void Deletion_at_Tail(dobleyNode*&head)
{
    if(head==NULL)
    {
        return ;
    }
    if(head->Next==NULL)
    {
        Deletion_at_Head(head);
        return;
    }
    dobleyNode * temp = head;
    while(temp->Next->Next!=NULL)
    {
        temp = temp->Next;
    }
    temp->Next = NULL;

}

void Deletion_at_specific_position(dobleyNode * &head,int position)
{
    dobleyNode * temp = head;
    int i=1;
    int count = counting_the_size(head);
    if(position>count||position<=0)
    {
        cout<<"Invalid Position Number" <<endl;
        return ;
    }
    if(position==1)
    {
        Deletion_at_Head(head);
        return;
    }
    while(position-1>i)
    {
        temp = temp->Next;
        i++;
    }
    dobleyNode * newNode = temp->Next->Next;
    temp->Next =  newNode;
    if(temp->Next!=0)   ///NULL = 0 same both are.
        newNode->prev = temp;
}

void Deletion_a_value(dobleyNode*&head,int value)
{
    int position = search_a_value_unique_list(head,value);
    if(position<=0)
    {
        cout<<"Value Not Found"<<endl;
        return ;
    }
    Deletion_at_specific_position(head,position);
}

void Deletion_duplicate_value(dobleyNode*&head,int value)
{
    Position T;
    T = search_a_value_duplicate_list(head,value);
    if(T.index[0]<=1)
    {
        cout<<"Value Not Found"<<endl;
        return;
    }
    int i=1;
    for(i=1; i<T.index[0]; i++)
    {
        Deletion_at_specific_position(head,T.index[i]-i+1);
    }

}


int main()
{
    dobleyNode * head = NULL;

    cout<<"Enter the choice Option: \n";
    cout <<"  0: Exit "<<endl
         <<"  1: Counting the Size "<<endl
         <<"  2: Display List"<<endl
         <<"  3: Insertion at Head"<<endl
         <<"  4: Insertion at Tail "<<endl
         <<"  5: Insertion at Specific Position"<<endl
         <<"  6: Search a value (Unique List)"<<endl
         <<"  7: Search a value (Duplication enabled List)"<<endl
         <<"  8: Insertion after a specific value (Unique List) "<<endl
         <<"  9: Insertion after a specific value (Duplication enabled List)"<<endl
         <<" 10: Deletion at Head"<<endl
         <<" 11: Deletion at Tail"<<endl
         <<" 12: Deletion at a Specific Position"<<endl
         <<" 13: Deletion by Value (Unique List)"<<endl
         <<" 14: Deletion by Value(Duplication enabled List) "<<endl;


    int option,counting =0,position=0;
    cout<<"Enter the Choice : ";
    cin>>option;
    while(option!=0)
    {
        int value;
        switch(option)
        {
        case 1:
            counting = counting_the_size(head);
            cout<<" Linked List size: " <<counting<<endl;
            break;
        case 2:
            cout<<"Display Linked List value: ";
            Display(head);
            break;
        case 3:
            cout<<"Enter the value: ";
            cin>>value;
            Insertion_at_Head(head,value);
            break;
        case 4:
            cout<<"Enter the value: ";
            cin>>value;
            Insertion_at_Tail(head,value);
            break;
        case 5:
            cout<<"Enter the position: ";
            cin>>position;
            cout<<"Enter the value: ";
            cin>>value;
            Insertion_at_specific_posetion(head,position,value);
            break;
        case 6:
            cout<<"Enter the value : ";
            cin>>value;
            counting = search_a_value_unique_list(head,value);
            if(counting==0) cout<<"VALUE NOT FOUND "<<endl;
            else cout<<"VALUE FOUND Position no: "<<counting<<endl;
            break;
        case 7:
            cout<<"Enter the value: ";
            cin>>value;
            Position T;
            T = search_a_value_duplicate_list(head,value);
            if(T.index[0]>1)
            {
                counting = T.index[0];
                cout<<"Found Value Position no: ";
                for(int i=1; i<counting; i++)
                {
                    cout<<T.index[i];
                    if(i<counting-1) cout<<"-->";
                }
                cout<<endl;
            }
            else cout<<"NOT FOUND VALUE"<<endl;
            break;
        case 8:
            cout<<"Enter the value search: ";
            cin>>value;
            cout<<"Enter the value : ";
            cin>>position;
            Insertion_a_specific_value(head,value,position);
            break;
        case 9:
            cout<<"Enter the value search: ";
            cin>>value;
            cout<<"Enter the value : ";
            cin>>position;
            Insertion_duplicate_specific_value(head,value,position);
            break;
        case 10:
            Deletion_at_Head(head);
            break;
        case 11:
            Deletion_at_Tail(head);
            break;
        case 12:
            cout<<"Enter the Position Delete: ";
            cin>>value;
            Deletion_at_specific_position(head,value);
            break;
        case 13:
            cout<<"Enter the value: ";
            cin>>value;
            Deletion_a_value(head,value);
            break;
        case 14:
            cout<<"Enter the value: ";
            cin>>value;
            Deletion_duplicate_value(head,value);
            break;
        default:
            break;
        }
        cout<<"Enter the Next Choice : ";
        cin>>option;
    }
    return 0;
}

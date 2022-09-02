#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node * left;
    Node * right;
    Node(int value)
    {
        this->val = value;
        left = NULL;
        right = NULL;
    }
};

//Question no 1 Answer: 
void In_Order(Node* root,string& s)  // recursively string add Tree value.
{
    if(root == NULL) return ;

    In_Order(root->left,s);
    s+=to_string(root->val);        //Add String Root.
    In_Order(root->right,s);
}


//Question no 2 Answer: 
void Level_order(Node* root)
{
    if(root == NULL) return ;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node * currentNode = q.front();
        q.pop();
        if(currentNode!=NULL)
        {
            cout<<currentNode->val<<" ";
            if(currentNode->left!=NULL)
            {
                q.push(currentNode->left);
            }
            if(currentNode->right != NULL)
            {
                q.push(currentNode->right);
            }
        }
        else
        {
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
    }
}

bool isSame(Node* root1, Node* root2)
{
    string s,st;
    In_Order(root1,s);     //Call Print_In_Order.
    In_Order(root2,st);   //Call Print_In_Order.
    if(s==st)  //Check True or false.
    {
        // cout<<"True"<<endl;
        return true; //Return Ture.
    }
    else
    // cout<<"False"<<endl;
    return false;  //Return False.
}

int main()
{
    int m;
    cin>>m;
    Node* root = new Node(m);
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node * current = q.front();
        q.pop();

        int x,y;
        cin>>x>>y;
        Node* n1 = NULL;
        Node* n2 = NULL;
        if(x != -1) n1 = new Node(x);
        if(y != -1) n2 = new Node(y);

        current->left = n1;
        current->right = n2;

        if(n1 != NULL) q.push(n1);
        if(n2 != NULL) q.push(n2);
    }

    int n;
    cin>>n;
    Node* Root = new Node(n);
    q.push(Root);
    while(!q.empty())
    {
        Node * current = q.front();
        q.pop();

        int x,y;
        cin>>x>>y;
        Node* n1 = NULL;
        Node* n2 = NULL;
        if(x != -1) n1 = new Node(x);
        if(y != -1) n2 = new Node(y);

        current->left = n1;
        current->right = n2;

        if(n1 != NULL) q.push(n1);
        if(n2 != NULL) q.push(n2);
    }

    string s ="";
    cout<<endl<<endl;
   bool found = false ;
   found = isSame(root,Root);
   if(found)
   {
    cout<<"True"<<endl;
   }
   else{
    cout<<"False"<<endl;
   }
    
    cout<<s<<endl;

    return 0;

}
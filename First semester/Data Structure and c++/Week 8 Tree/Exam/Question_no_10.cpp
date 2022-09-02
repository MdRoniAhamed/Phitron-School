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

void level_order_reverse(Node* root) ;
void level_order(Node* root);
void In_Order(Node* root,string& s);
bool isSame(Node* root1, Node* root2);
bool isSymmetric(Node* root);
bool is_unival(Node* root);
void Pre_Order(Node* root,vector<int>& v);


//Question no 2 Answer: 
void level_order(Node* root)  // Create Function Level Order Print Binary Tree.
{
    if(root == NULL) return ;
    cout<<"Output: ";
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())  //Check queue empty or not empty.
    {
        Node * currentNode = q.front();  //create CurrentNode store queue front Node.
        q.pop();
        if(currentNode!=NULL)  //Check string null or not null.
        {
            cout<<currentNode->val<<" "; //Print Level order Node value.
            if(currentNode->left!=NULL) 
            {
                q.push(currentNode->left);  //queue push value CurrentNode->left value.
            }
            if(currentNode->right != NULL) 
            {
                q.push(currentNode->right);  //queue push value CurrentNode->right value.
            }
        }
        else
        {
            if(!q.empty())
            {
                q.push(NULL);  //queue push NULL / 0
            }
        }
    }
}

//Question no 1 Answer: 
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

//Question no 3 Answer:
void level_order_reverse(Node* root)  // Create Function Level Order Reverse Print Binary Tree.
{
    if(root == NULL) return;
    cout<<"Output: ";
    queue<Node*> q;
    stack<int> st;
    q.push(root);
    q.push(NULL);
    while(!q.empty())  //Check queue empty or not empty.
    {
        Node * currentNode = q.front();  //create CurrentNode store queue front Node.
        q.pop();
        if(currentNode!=NULL)  //Check string null or not null.
        {
            st.push(currentNode->val);
            if(currentNode->right!=NULL) 
            {
                q.push(currentNode->right);  //queue push value CurrentNode->right value.
            }
            if(currentNode->left != NULL) 
            {
                q.push(currentNode->left);  //queue push value CurrentNode->right value.
            }
        }
        else
        {
            if(!q.empty())
            {
                q.push(NULL);  //queue push NULL / 0
            }
        }
    }

    while(!st.empty())  //Print level order reverse Binary tree value.
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

//Question no 4 Answer:
bool isSymmetric(Node* root)
{
    if(root==NULL) return false;
    string v,v2;
    In_Order(root->left,v);  //Call Right left Node value.
    In_Order(root->right,v2);   //Call left Node Value.
    reverse(v.begin(),v.end());  //reverse string. 
    if(v==v2)
    {
       // cout<<"This tree is a symmetric tree."<<endl;
        return true;
    }
    else{
       // cout<<"This tree is not a symmetric tree."<<endl;
        return false;
    }

}

void In_Order(Node* root,string& s)  // recursively string add Tree value.
{
    if(root == NULL) return ;

    In_Order(root->left,s);
    s+=to_string(root->val);        //Add String Root.
    In_Order(root->right,s);
}

// Question no 9 Answer:
bool is_unival(Node* root)
{
    if(root==NULL) return false ; 
    vector<int> v;  //Create Vector v . 
    Pre_Order(root,v);  //Call PreOrder Function .
    int i=1; 
    // cout<<v[0]<<" ";
    while(i<v.size())
    {
        if(v[0]!=v[i])  //Check Uni-valued value or not Uni-valued value. 
        {
            // cout<<"This is not an uni-valued tree."<<endl;
            return false;  //Return false Not Uni-valued value.
        }
        // cout<<v[i]<<" ";
        i++;
    }
    // cout<<endl<<"This is an uni-valued tree."<<endl;
    return true;  //Return True Uni-valued value.
}

void Pre_Order(Node* root,vector<int>& v)  //Preorder Traversel .
{
    if(root==NULL)
    return ;
    v.push_back(root->val);
    Pre_Order(root->left,v);
    Pre_Order(root->right,v);
}

int second_minimum(Node* root)  //Create Function Second minimum
{
    if(root==NULL) return -1;  // not value second minimum return -1.

    vector<int> v;
    Pre_Order(root,v);  // Call Pre_Order Traversal. 
    sort(v.rbegin(), v.rend());  //Descending order reverse.
    int i=1;
    while(i<v.size())
    {
        if(v[0]>v[i]){  // Check Second minimum .
            // cout<<v[i]<<endl;
            return v[i];  // return Second minimum value.
        }
        i++;
    }
    return -1;  //Not found second minimum valeu return -1.
}

int main()
{

    cout<<endl<<endl;
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
    cout<<endl<<endl;
   int se = second_minimum(root);
   cout<<se<<endl;
    cout<<endl<<endl;
    return 0;

}
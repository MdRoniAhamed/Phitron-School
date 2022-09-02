#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left_child;
    TreeNode *right_child;

    TreeNode(int value)
    {
        this->data = value;
        left_child = NULL;
        right_child = NULL;
    }
};
void Print_inorder(TreeNode * root, string & s);

void Print_inorder(TreeNode * root, string & s)
{
    if(root==NULL)
    {
        return ;
    }
    Print_inorder(root->left_child,s);
    // cout<<root->data;
    s+= to_string(root->data);
    Print_inorder(root->right_child,s);
}

void Print_postorder(TreeNode * root, string & s)
{
    if(root==NULL)
    {
        return ;
    }
    Print_postorder(root->left_child,s);

    Print_postorder(root->right_child,s);
//    cout<<root->data;
    s+= to_string(root->data);
}


void space(int level)
{
    for(int i=0; i<level; i++)
    {
        cout<<"   ";
    }
}

int main()
{
    bool found = false;
    // int n,k;
    // cin >> n>>k;
    int m;
    cin>>m;
    TreeNode* root = new TreeNode(m);
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode * presentRoot = q.front();
        q.pop();
        int a,x,y;
        if(found) cin>>a;
        cin>>x>>y;
        found = true;
        TreeNode * n1 = NULL;
        TreeNode * n2 = NULL;
        if(x != -1) n1 = new TreeNode(x);
        if(y != -1) n2 = new TreeNode(y);

        presentRoot->left_child = n1;
        presentRoot->right_child = n2;
        if(n1 != NULL)  q.push(n1);
        if(n2 != NULL)  q.push(n2);

    }
   
    // k--;
    string s="";
    string p = "" ;

    // Print_inorder(root,s);
    // cout<<endl;
    // cout<<s<<endl;
    // cout<<s[k]<<endl;
   Print_postorder(root,p);
   cout<<endl;
//    cout<<p[k]<<endl;

    return 0;
}

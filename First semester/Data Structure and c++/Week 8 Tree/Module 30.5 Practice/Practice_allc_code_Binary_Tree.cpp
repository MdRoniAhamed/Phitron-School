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

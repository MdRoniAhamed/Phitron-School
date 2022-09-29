#include<bits/stdc++.h>
using namespace std;
string str;

class Node
{
    public:
   int value;
    Node * left;
    Node * right;
    Node(int data)
    {
        value = data;
    }

};

int ans =0;
void C_P(vector<int> ve)
{
    bool check = true;
    // cout<<st<<endl;
    string st;
    for(int i=0; i<ve.size(); i++)
    {
        st+= str[ve[i]];
    }

    for(int i=0,j=st.size()-1; i<j; i++,j--)
    {
        if(st[i]!=st[j])
        {
            check = false;
        }
    }
    if(check)
    {
        ans++;
    }
}

void p_r(Node* root, vector<int> st)
{
    if(root==NULL) return;
    if(root->left==NULL&&root->right==NULL)
    {
        st.push_back(root->value);
        C_P(st);
        return;
    }
    st.push_back(root->value);
    p_r(root->left , st);
    p_r(root->right , st);

}

int main()
{
    cin>>str;
    int m;
    cin>>m;
    Node * root = new Node(m);
    int count = 0;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node * current = q.front();
        q.pop();
        int a,b;
        cin>>a>>b;
        Node * ab = NULL;
        Node * ba = NULL;
        if(a!=-1)
        {
            count++;
            ab = new Node(a);
            q.push(ab);
        }
        if(b!=-1)
        {
            count++;
            ba = new Node (b);
            q.push(ba);
        }
        current->left = ab;
        current->right = ba;
    }
    vector<int> ve;
    p_r(root,ve);

    cout<<ans<<endl;
    return 0;
}

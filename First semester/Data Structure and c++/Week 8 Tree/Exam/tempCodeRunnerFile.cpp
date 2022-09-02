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
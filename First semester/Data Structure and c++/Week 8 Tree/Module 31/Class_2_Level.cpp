// Class 2 module 31.
#include <bits/stdc++.h>
using namespace std;
// 12: 0 minutes .
class treeNode
{
public:
    int data;
    treeNode *leftChild;
    treeNode *rightChild;
    treeNode(int value)
    {
        data = value;
        leftChild = NULL;
        rightChild = NULL;
    }
};
void printTree(treeNode *root, int level);
void spacePrint(int level);
void inOrder(treeNode *root, string &chk);
void preOrder(treeNode *root, string &chk);
void postOrder(treeNode *root, string &chk);
void Level_Order_Traversel(treeNode *root, string &chk);

void inOrder(treeNode *root, string &chk) // Left Root Right.
{
    if (root == NULL)
        return;
    inOrder(root->leftChild, chk);
    chk += (to_string(root->data)+' ' );
    inOrder(root->rightChild, chk);
}

void preOrder(treeNode *root, string &chk) // Root left Right
{
    if (root == NULL)
        return;
    chk += (to_string(root->data)+' ' );
    preOrder(root->leftChild, chk);
    preOrder(root->rightChild, chk);
}

void postOrder(treeNode *root, string &chk) // Left Right Root
{
    if (root == NULL)
        return;
    postOrder(root->leftChild, chk);
    postOrder(root->rightChild, chk);
    chk += (to_string(root->data)+' ' );
}

void printTree(treeNode *root, int level)
{
    if (root == NULL) // When Tree is empty.
    {
        return;
    }

    if (root->leftChild == NULL && root->rightChild == NULL) // CASE is ONE.
    {
        cout << root->data << endl;
        return;
    }
    else // CASE 2.
    {
        cout << endl;
        spacePrint(level);
        cout << "Root:" << root->data << endl;
    }

    if (root->leftChild != NULL)
    {
        spacePrint(level);
        cout << "Left: ";
        printTree(root->leftChild, level + 1);
    }

    if (root->rightChild != NULL)
    {
        spacePrint(level);
        cout << "Right: ";
        printTree(root->rightChild, level + 1);
    }
}

void spacePrint(int level)
{
    for (int i = 0; i < level; i++)
    {
        cout << "   ";
    }
}

// Module 31 => Class 2 Coded .
void Level_Order_Traversel(treeNode *root, string &chk)
{
    if (root == NULL)
    {
        return ;
    }
    int level = 0;
    queue<treeNode *> q;
    q.push(root);
    q.push(NULL);

    int max = INT_MIN;

    while (!q.empty())
    {
        treeNode *chkNode = q.front();
        q.pop();
        if (chkNode != NULL)
        {
            chk += (to_string(chkNode->data)+' ' );
            if (chkNode->leftChild != NULL)
            {
                q.push(chkNode->leftChild);
            }
            if (chkNode->rightChild != NULL)
            {
                q.push(chkNode->rightChild);
            }
        }
        else
        {
            if (!q.empty())
            {
                q.push(NULL);
                level++;
            }
        }
    }

}

int main()
{
    // int n;
    // cin >> n;
    // treeNode *allNodes[n];

    // bool found = false;
    // int n,k;
    // cin >> n>>k;
    int m;
    cin >> m;
    treeNode *root = new treeNode(m);
    queue<treeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        treeNode *presentRoot = q.front();
        q.pop();
        int x, y;
        cin >> x >> y;
        treeNode *n1 = NULL;
        treeNode *n2 = NULL;
        if (x != -1)
            n1 = new treeNode(x);
        if (y != -1)
            n2 = new treeNode(y);

        presentRoot->leftChild = n1;
        presentRoot->rightChild = n2;
        if (n1 != NULL)
            q.push(n1);
        if (n2 != NULL)
            q.push(n2);
    }
    // printTree(allNodes[0], 0);

    string inordertraversal = "";
    string preordertraversal = "";
    string postordertraversal = "";
    string level_Order = "";
    inOrder(root, inordertraversal);
    preOrder(root, preordertraversal);
    postOrder(root, postordertraversal);
    Level_Order_Traversel(root, level_Order);
    cout << endl;
    //      << endl;

    //      //Class 2 Module 31
    // int max_Value_add_K = Level_Order_Traversel(allNodes[0], level_Order_Traversel, 2);
    // cout << endl
    //      << max_Value_add_K << endl;

    cout << endl
         << endl;
    cout << "Inorder Order Traversal: " << inordertraversal << endl;
    cout << "Preorder Order Traversal: " << preordertraversal << endl;
    cout << "Postorder Order Traversal: " << postordertraversal << endl;
    cout << "Level Order Traversel: " << level_Order << endl;
    cout << endl
         << endl;

    return 0;
}
/*
15
11 26
8 12 20 30
6 9 -1 14 -1 -1 -1 35  
-1 -1 -1 -1 -1 -1 -1 -1

*/

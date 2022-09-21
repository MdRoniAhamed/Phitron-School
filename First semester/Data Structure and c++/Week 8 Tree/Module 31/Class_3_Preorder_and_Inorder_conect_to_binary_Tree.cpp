// 31-3 Construct a Binary Tree using Preorder and Inorder Traversal
// Class 3 module 31.
#include <bits/stdc++.h>
using namespace std;
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
void preOrder_Traversel(treeNode *root, string &chk);
void postOrder(treeNode *root, string &chk);
void Level_Order_Traversel(treeNode *root, string &chk);
treeNode *Build_Tree_Pre_In(int Pre_Order[], int In_Order[], int star, int end);

void inOrder(treeNode *root, string &chk) // Left Root Right.
{
    if (root == NULL)
        return;
    inOrder(root->leftChild, chk);
    chk += to_string(root->data);
    inOrder(root->rightChild, chk);
}

void preOrder_Traversel(treeNode *root, string &chk) // Root left Right
{
    if (root == NULL)
        return;
    chk += to_string(root->data);
    preOrder_Traversel(root->leftChild, chk);
    preOrder_Traversel(root->rightChild, chk);
}

void postOrder(treeNode *root, string &chk) // Left Right Root
{
    if (root == NULL)
        return;
    postOrder(root->leftChild, chk);
    postOrder(root->rightChild, chk);
    chk += to_string(root->data);
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
int Level_Order_Traversel(treeNode *root, string &chk, int n)
{
    if (root == NULL)
    {
        return -1;
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
            if (level == n)
            {
                if (max < chkNode->data)
                {
                    max = chkNode->data;
                }
            }

            cout << chkNode->data << " ";
            chk += to_string(chkNode->data);
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

    return max;
}

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

int Search_In_Order(int In_Order[], int current, int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (In_Order[i] == current)
        {
            return i;
        }
    }
    // cout<<" Roni " <<end<<endl;

    return -1;
}

// Class 3 Module 31. 35 minutes.
// 31-3 Construct a Binary Tree using Preorder and Inorder Traversal. 28 minutes.
treeNode *Build_Tree_Pre_In(int Pre_Order[], int In_Order[], int start, int end)
{
    static int id = 0;
    int current = Pre_Order[id];
    id++;
    treeNode *newNode = new treeNode(current);
    if (start == end)
    {
        return newNode;
    }

    int pos = Search_In_Order(In_Order, current, start, end);

    newNode->leftChild = Build_Tree_Pre_In(Pre_Order, In_Order, start, pos - 1);

    newNode->rightChild = Build_Tree_Pre_In(Pre_Order, In_Order, pos + 1, end);

    return newNode;
}

int main()
{
    int n;
    cin >> n;
    int Pre_Order[n];
    int In_Order[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Pre_Order[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> In_Order[i];
    }

    treeNode *root = Build_Tree_Pre_In(Pre_Order, In_Order, 0, n - 1);
    string chkPre = "";
    inOrder(root, chkPre);

    cout << endl
         << chkPre << endl
         << endl
         << endl;

    return 0;
}

/*

7
5 2 1 3 4 7 6
1 2 3 4 5 6 7


7
1 2 3 4 5 6 7
3 2 5 4 1 6 7


10
0 1 3 4 2 5 7 8 6 10
3 1 4 0 7 5 8 2 6 10

9
0 1 2
1 3 4
2 5 6
3 -1 -1
4 -1 -1
5 7 8
6 -1 -1
7 -1 -1
8 -1 -1

Root: 0
Left:
    Root: 1
    Left: 3
    Right: 4
Right:
    Root: 2
    Left:
        Root:5
        Left: 7
        Right: 8
    Right:6

*/

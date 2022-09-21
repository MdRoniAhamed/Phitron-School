// 31-4 Boundary Traversal of a Binary Tree
// Class  module 31.
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
void Print_Leaves(treeNode *root);
void Print_Left_Non_Leaves(treeNode *root);
void Print_Right_Non_Leaves(treeNode *root);
void boundary_Traversal(treeNode *root);
int Level_Order_Traversel(treeNode *root, string &chk, int n);
int Search_In_Order(int In_Order[], int current, int start, int end);
treeNode *Build_Tree_Pre_In(int Pre_Order[], int In_Order[], int start, int end);

void inOrder(treeNode *root, string &chk) // Left Root Right.
{
    if (root == NULL)
        return;
    inOrder(root->leftChild, chk);
    chk += (to_string(root->data) + " ");
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

// 31-4 Boundary Traversal of a Binary Tree
void Print_Leaves(treeNode *root)
{
    if (root == NULL)
        return;
    if (root->leftChild == NULL && root->rightChild == NULL)
    {
        cout << root->data << " ";
        return;
    }
    Print_Leaves(root->leftChild);
    Print_Leaves(root->rightChild);
}

// 31-4 Boundary Traversal of a Binary Tree
void Print_Left_Non_Leaves(treeNode *root)
{
    if (root == NULL)
        return;

    if (root->leftChild != NULL)
    {
        cout << root->data << " ";
        Print_Left_Non_Leaves(root->leftChild);
    }
    else if (root->rightChild != NULL)
    {
        cout << root->data << " ";
        Print_Left_Non_Leaves(root->rightChild);
    }
}

// Class 4 Boundary Traversal of a Binary Tree
void Print_Right_Non_Leaves(treeNode *root)
{
    if (root == NULL)
        return;

    if (root->rightChild != NULL)
    {
        cout << root->data << " ";
        Print_Left_Non_Leaves(root->rightChild);
    }
    else if (root->leftChild != NULL)
    {
        cout << root->data << " ";
        Print_Left_Non_Leaves(root->leftChild);
    }
}

// 31-4 Boundary Traversal of a Binary Tree
void boundary_Traversal(treeNode *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";

    // LB Non-Leaves.
    Print_Left_Non_Leaves(root->leftChild);
    // LB Leaves .
    Print_Leaves(root->leftChild);
    // RB Leaves.
    Print_Leaves(root->rightChild);
    // RB Non-Leaves.
    Print_Right_Non_Leaves(root->rightChild);
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

// Module 31 => Class 2 Code .
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

int Search_In_Order(int In_Order[], int current, int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (In_Order[i] == current)
        {
            return i;
        }
    }

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

treeNode *Insertion_BST(treeNode *root, int value)
{
    treeNode *newNode = new treeNode(value);
    if (root == NULL)
    {
        root = newNode;
        return root;
    }
    if (root->data > value)
    {
        root->leftChild = Insertion_BST(root->leftChild, value);
    }
    else if (root->data < value)
    {
        root->rightChild = Insertion_BST(root->rightChild, value);
    }

    return root;
}

treeNode *search_BST(treeNode *root, int value)
{
    treeNode *newNode = NULL;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == value)
    {
        return root;
    }
    if (root->data > value)
    {
        newNode = search_BST(root->leftChild, value);
    }
    else if (root->data < value)
    {
        newNode = search_BST(root->rightChild, value);
    }
    return newNode;
}

treeNode *Current_BST(treeNode *root)
{
    treeNode *newNode = root;
    while (newNode->leftChild != NULL)
    {
        newNode = newNode->leftChild;
    }

    return newNode;
}

treeNode *Deletion_BST(treeNode *root, int value)
{
    if (root->data > value)
    {
        root->leftChild = Deletion_BST(root->leftChild, value);
    }
    else if (root->data < value)
    {
        root->rightChild = Deletion_BST(root->rightChild, value);
    }
    else
    {
        if (root->leftChild == NULL) // case 1|| case 2
        {
            treeNode *temp = root->rightChild;
            free(root);
            return temp;
        }
        else if (root->rightChild == NULL) // case 2.
        {
            treeNode *temp = root->leftChild;
            free(root);
            return temp;
        }
        else
        {

            treeNode *temp = Current_BST(root->rightChild);
            root->data = temp->data;
            root->rightChild = Deletion_BST(root->rightChild, temp->data);
        }
        // return root;
    }

    return root;
}

int main()
{
    int n;
    cin >> n;
    treeNode *root = NULL;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        root = Insertion_BST(root, b);
    }

    string inorder = "";
    inOrder(root, inorder);
    cout << endl
         << endl
         << inorder << endl;

    int key;
    cin >> key;
    root = Deletion_BST(root, key);

    string after = "";
    inOrder(root, after);
    cout << endl
         << endl
         << after << endl;

    return 0;
}
/*

9
11 5 9 43 34 1 2 7 21

9
0 1 3 4 2 5 7 8 6
3 1 4 0 7 5 8 2 6

*/

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

void inOrder(treeNode *root, string &chk) // Left Root Right.
{
    if (root==NULL)
    return;
     
     inOrder(root->leftChild,chk);

     chk += to_string(root->data)+" ";

     inOrder(root->rightChild,chk);

}

void preOrder(treeNode *root, string &chk) // Root left Right
{
   
}

void postOrder(treeNode *root, string &chk) // Left Right Root
{
   
}


int main()
{
    int n;
    cin >> n;
    treeNode *allNodes[n];

    for (int i = 0; i < n; i++)
    {
        allNodes[i] = new treeNode(-1);
    }

    for (int i = 0; i < n; i++)
    {
        int value, left, right;
        cin >> value >> left >> right;
        allNodes[i]->data = value;
        if (left > n - 1 || right > n - 1)
        {
            cout << "Invalide index." << endl;
            break;
        }
        if (left != -1)
        {
            allNodes[i]->leftChild = allNodes[left];
        }

        if (right != -1)
        {
            allNodes[i]->rightChild = allNodes[right];
        }
    }

    string inordertraversal = "";
    string preordertraversal = "";
    string postordertraversal = "";
    inOrder(allNodes[0], inordertraversal);
    // preOrder(allNodes[0], preordertraversal);
    // postOrder(allNodes[0], postordertraversal);

    cout << "Inorder Traversal: " << inordertraversal << endl;
    cout << "Preorder Traversal: " << preordertraversal << endl;
    cout << "Postorder Traversal: " << postordertraversal << endl;

    return 0;
}
/*
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

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
        data = value;
        left_child = NULL;
        right_child = NULL;
    }
};

void SpacePrint(int level);
void Print_Tree(TreeNode *root, int level);
void inOrder(TreeNode *root, string &chk);
void preOrder(TreeNode *root, string &chk);
void postOrder(TreeNode *root, string &chk);

void inOrder(TreeNode *root, string &chk) // Left Root Right.
{
    if (root == NULL)
        return;
    inOrder(root->left_child, chk);
    chk += to_string(root->data);
    inOrder(root->right_child, chk);
}

void preOrder(TreeNode *root, string &chk) // Root left Right
{
    if (root == NULL)
        return;
    chk += to_string(root->data);
    preOrder(root->left_child, chk);
    preOrder(root->right_child, chk);
}

void postOrder(TreeNode *root, string &chk) // Left Right Root
{
    if (root == NULL)
        return;
    postOrder(root->left_child, chk);
    postOrder(root->right_child, chk);
    chk += to_string(root->data);
}

void Print_Tree(TreeNode *root, int level)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left_child == NULL && root->right_child == NULL)
    {
        cout << root->data << endl;
        return;
    }
    else
    {
        cout << endl;
        SpacePrint(level);
        cout << "Root:" << root->data << endl;
    }

    if (root->left_child != NULL)
    {
        SpacePrint(level);
        cout << "Left: ";
        Print_Tree(root->left_child, level + 1);
    }

    if (root->right_child != NULL)
    {
        SpacePrint(level);
        cout << "Right:";
        Print_Tree(root->right_child, level + 1);
    }
}

void SpacePrint(int level)
{
    for (int i = 0; i < level; i++)
    {
        cout << "   ";
    }
}

int main()
{
    int n;
    cin >> n;
    TreeNode *all_Tree[n];

    for (int i = 0; i < n; i++)
    {
        all_Tree[i] = new TreeNode(-1);
    }

    for (int i = 0; i < n; i++)
    {
        int value, left, right;
        cin >> value >> left >> right;
        all_Tree[i]->data = value;
        if (left > n - 1 && right > n - 1)
        {
            cout << "Ivalid Index." << endl;
            break;
        }

        if (left != -1)
        {
            all_Tree[i]->left_child = all_Tree[left];
        }

        if (right != -1)
        {
            all_Tree[i]->right_child = all_Tree[right];
        }
    }

    Print_Tree(all_Tree[0], 0);

    string inordertraversal = "";

    string preordertraversal = "";
    string postordertraversal = "";
    inOrder(all_Tree[0], inordertraversal);
    preOrder(all_Tree[0], preordertraversal);
    postOrder(all_Tree[0], postordertraversal);

    cout << "Inorder Traversal: " << inordertraversal << endl;
    cout << "Preorder Traversal: " << preordertraversal << endl;
    cout << "Postorder Traversal: " << postordertraversal << endl;

    return 0;
}
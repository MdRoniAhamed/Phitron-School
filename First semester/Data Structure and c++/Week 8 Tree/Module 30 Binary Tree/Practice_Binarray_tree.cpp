#include<bits/stdc++.h>
using namespace std;
class treeNode
{
public:

    int data;
    treeNode * leftChild;
    treeNode * rightChild;
    treeNode(int value)
    {
        data = value;
        leftChild = NULL;
        rightChild = NULL;
    }
};

void  printTree(treeNode* root,int level);

void  printTree(treeNode* root,int level){

}

int main()
{
    int n;
    cin>>n;
    treeNode * allTreeNodes[n];
    for(int i=0; i<n; i++)
    {
        allTreeNodes[i]->data = -1;
    }

    for(int i=0; i<n; i++)
    {
        int value, left, right;
        if(left != -1)
        {
            allTreeNodes[i]->leftChild = allTreeNodes[left];
        }
        if(right != -1)
        {
            allTreeNodes[i]->rightChild = allTreeNodes[right]; 
        }
    }

    printTree(allTreeNodes[0],0);

    return 0;
}

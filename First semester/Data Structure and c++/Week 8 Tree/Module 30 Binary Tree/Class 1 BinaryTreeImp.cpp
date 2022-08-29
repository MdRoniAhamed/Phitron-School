#include<bits/stdc++.h>
using namespace std;
//12: 0 minutes .
class treeNode{
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


int main()
{

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

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->val = value;
        left = NULL;
        right = NULL;
    }
};

void level_order_reverse(Node *root);
void level_order(Node *root);
void In_Order(Node *root, string &s);
bool isSame(Node *root1, Node *root2);
bool isSymmetric(Node *root);
void zigzag_order(Node *root);
Node *invert_tree(Node *root);

// Question no 2 Answer:
void level_order(Node *root) // Create Function Level Order Print Binary Tree.
{
    if (root == NULL)
        return;
    cout << "Output: ";
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) // Check queue empty or not empty.
    {
        Node *currentNode = q.front(); // create CurrentNode store queue front Node.
        q.pop();
        if (currentNode != NULL) // Check string null or not null.
        {
            cout << currentNode->val << " "; // Print Level order Node value.
            if (currentNode->left != NULL)
            {
                q.push(currentNode->left); // queue push value CurrentNode->left value.
            }
            if (currentNode->right != NULL)
            {
                q.push(currentNode->right); // queue push value CurrentNode->right value.
            }
        }
        else
        {
            if (!q.empty())
            {
                q.push(NULL); // queue push NULL / 0
            }
        }
    }
}

// Question no 1 Answer:
bool isSame(Node *root1, Node *root2)
{
    string s, st;
    In_Order(root1, s);  // Call Print_In_Order.
    In_Order(root2, st); // Call Print_In_Order.
    if (s == st)         // Check True or false.
    {
        // cout<<"True"<<endl;
        return true; // Return Ture.
    }
    else
        // cout<<"False"<<endl;
        return false; // Return False.
}

// Question no 3 Answer:
void level_order_reverse(Node *root) // Create Function Level Order Reverse Print Binary Tree.
{
    if (root == NULL)
        return;
    cout << "Output: ";
    queue<Node *> q;
    stack<int> st;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) // Check queue empty or not empty.
    {
        Node *currentNode = q.front(); // create CurrentNode store queue front Node.
        q.pop();
        if (currentNode != NULL) // Check string null or not null.
        {
            st.push(currentNode->val);
            if (currentNode->right != NULL)
            {
                q.push(currentNode->right); // queue push value CurrentNode->right value.
            }
            if (currentNode->left != NULL)
            {
                q.push(currentNode->left); // queue push value CurrentNode->right value.
            }
        }
        else
        {
            if (!q.empty())
            {
                q.push(NULL); // queue push NULL / 0
            }
        }
    }

    while (!st.empty()) // Print level order reverse Binary tree value.
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

// Question no 4 Answer:
void In_Order(Node *root, string &s) // recursively string add Tree value.
{
    if (root == NULL)
        return;

    In_Order(root->left, s);
    s += to_string(root->val); // Add String Root.
    In_Order(root->right, s);
}

bool isSymmetric(Node *root)
{
    if (root == NULL)
        return false;
    string v, v2;
    In_Order(root->left, v);     // Call Right left Node value.
    In_Order(root->right, v2);   // Call left Node Value.
    reverse(v.begin(), v.end()); // reverse string.
    if (v == v2)
    {
        // cout<<"This tree is a symmetric tree."<<endl;
        return true;
    }
    else
    {
        // cout<<"This tree is not a symmetric tree."<<endl;
        return false;
    }
}

void zigzag_order(Node *root) // Create function Zigzag order.
{
    if (root == NULL) // Check root NULL then return .
        return;
    int id = 0;      // Level .
    queue<Node *> q; // Create Queue.
    vector<int> v;   // Create Vector.
    q.push(root);    // Queue push root.
    q.push(NULL);

    while (!q.empty())
    {
        Node *newNode = q.front();
        q.pop();
        if (newNode != NULL) // Check NewNode NULL or not NULL.
        {
            v.push_back(newNode->val); // Add Tree value Vector.

            if (newNode->left != NULL)
            {
                q.push(newNode->left); // Queue Push Tree->Left.
            }
            if (newNode->right != NULL)
            {
                q.push(newNode->right); // Queue push Tree->right.
            }
        }
        else
        {
            if (id % 2 != 0)
            {
                reverse(v.begin(), v.end()); // Zigzag formate convert.
            }
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " "; // Print Tree value.
            }
            v.clear();
            if (!q.empty())
            {
                id++; // Level+1;
                q.push(NULL);
            }
        }
    }
}

Node *invert_tree(Node *root) // Create Function Invert Tree Node.
{
    if (root == NULL)
        return root;             // root == NULL return root.
    invert_tree(root->left);     // call invert_tree root->left.
    invert_tree(root->right);    // Call invert_tree root->right.
    Node *Current = root->right; // Swap the root->right and root->left.
    root->right = root->left;
    root->left = Current;

    return root; // return update root.
}

int find_Tilt_Sum(Node*root,int & sum)  //Create Function Find_Tilt_Sum.
{
    if(root == NULL) return 0;  //return NULL.
   int left_sum =  find_Tilt_Sum(root->left,sum);  //Call Find_Tilt_Sum root->left
    int right_sum = find_Tilt_Sum(root->right,sum);  //Call Find_Tilt_Sum root->right
    sum+= abs(left_sum-right_sum);  //add sum value 
    return left_sum + right_sum + root->val;
}
int findTilt(Node* root)
{
    if(root == NULL) return 0;  //return 0.
    int sum =0;  //create sum.
    find_Tilt_Sum(root,sum);  //Call function find_Tilt_Sum(root,sum).
    return sum;  //return sum.
}


int main()
{

    cout << endl
         << endl;
    int m;
    cin >> m;
    Node *root = new Node(m);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();

        int x, y;
        cin >> x >> y;
        Node *n1 = NULL;
        Node *n2 = NULL;
        if (x != -1)
            n1 = new Node(x);
        if (y != -1)
            n2 = new Node(y);

        current->left = n1;
        current->right = n2;

        if (n1 != NULL)
            q.push(n1);
        if (n2 != NULL)
            q.push(n2);
    }
    cout << endl
         << endl;
   int sum = findTilt(root);
   cout<<"Sum : "<<sum;
    cout << endl
         << endl;
    return 0;
}
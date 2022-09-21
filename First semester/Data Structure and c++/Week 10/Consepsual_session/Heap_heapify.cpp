#include <bits/stdc++.h>
using namespace std;
class Pairity_queue
{
private:
    vector<int> v;
    int left_child(int index)
    {
        return index * 2 + 1;
    }
    int right_child(int index)
    {
        return index * 2 + 2;
    }
    int parent(int index)
    {
        return (index - 1) / 2;
    }
    void heapify(int start)
    {
        int left = left_child(start);
        int right = right_child(start);
        int smallest = start;
        if (left < v.size() && v[smallest] > v[left])
            smallest = left;
        if (right < v.size() && v[right] < v[smallest])
            smallest = right;

        if (smallest != start)
        {
            swap(v[start], v[smallest]);
            heapify(smallest);
        }
    }

public:
    void Push(int val)
    {
        v.push_back(val);
        int ami = v.size() - 1;

        while (v[ami] < v[parent(ami)])
        {
            if (ami == 0)
                break;
            swap(v[ami], v[parent(ami)]);
            ami = parent(ami);
        }
    }

    void POP()
    {
        v[0] = v[v.size() - 1];
        v.pop_back();
        heapify(0);
    }
    int Top()
    {
        return v.at(0);
    }
    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    Pairity_queue pq;
    pq.Push(10);
    pq.Push(5);
    pq.Push(20);
    pq.Push(8);
    pq.Push(4);
    cout<<pq.Top()<<endl;
    if(pq.empty()) cout<<"True"<<endl;
    else cout<<"False"<<endl;
    while(!pq.empty())
    {
        cout<<pq.Top()<<" ";
        pq.POP();
    }
    cout<<endl;
    if(pq.empty()) cout<<"True"<<endl;
    else cout<<"False"<<endl;

    return 0;
}
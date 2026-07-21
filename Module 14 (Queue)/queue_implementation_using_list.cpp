#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<int> li;

    void push(int val)
    {
        li.push_back(val);
    }

    void pop()
    {
        li.pop_front();
    }

    int front()
    {
        return li.front();
    }

    int back()
    {
        return li.back();
    }

    int size()
    {
        return li.size();
    }

    bool empty()
    {
        return li.empty();
    }
};

int main()
{
    myQueue qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);

    qu.pop();
    qu.pop();
    qu.push(100);

    while (!qu.empty())
    {
        cout << qu.front() << " ";
        qu.pop();
    }

    return 0;
}
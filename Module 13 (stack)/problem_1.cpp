#include<bits/stdc++.h>
using namespace std;

class MyStack
{
    public :
    list<int>l;

    void push(int val)
    {
        l.push_back(val); //O(1)
    }
    void pop()
    {
        l.pop_back(); //O(1)
    }
    int top()
    {
        return l.back(); //O(1)
    }
    int size()
    {
        return l.size(); //O(1)
    }
    bool empty()
    {
        return l.empty(); //O(1)
    }

};

bool check_same(MyStack st, MyStack st2)
{
    bool flag = true;
    while(st.top() != NULL && st2.top() != NULL)
    {
        if(st.top() != st2.top())
        {
            flag = false;
            break;
        }
        st.pop();
        st2.pop();
    }
    return flag;
}

int main()
    {
        MyStack st;
        MyStack st2;
        
        int n;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            st.push(x);
        }
        int m;
        cin >> m;
        for(int i = 0; i < m; i++)
        {
            int y;
            cin >> y;
            st2.push(y);
        }

        bool flag = false;
        if(n != m)
        {
            cout <<"NO";
        }
        else
        {
            flag = check_same(st, st2);
            if( flag == false)
            {
                cout <<"NO";
            }
            else
            {
                cout <<"YES";
            }
        }


        
        return 0;
    }
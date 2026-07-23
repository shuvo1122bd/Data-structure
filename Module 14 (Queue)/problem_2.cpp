#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int n;
        cin >> n;
        stack<int> st;

        for(int i = 0; i < n;i++)
        {
            int x;
            cin >> x;
            st.push(x);
        }

        int m;
        cin >> m;
        queue<int> q;
        for(int i = 0; i < m; i++)
        {
            int x;
            cin >>x;
            q.push(x);
        }

        if(n != m)
        {
            cout <<"NO";
        }
        else
        {
            bool flag = true;
            while(!st.empty())
            {
                if(st.top() != q.front())
                {
                    flag = false;
                }
                st.pop();
                q.pop();
            }
            if(flag == true)
                cout <<"YES";
            else
                cout<<"NO";
        }

        return 0;
    }
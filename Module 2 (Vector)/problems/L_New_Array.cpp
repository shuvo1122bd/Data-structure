#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> c;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            c.push_back(a[i]);
        }
        vector <int> b(n);
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
            c.push_back(b[i]);
            cout << b[i] <<" ";
        }

        for(int i = 0; i < n; i++)
        {
            cout << c[i]<<" ";
        }

        return 0;
    }
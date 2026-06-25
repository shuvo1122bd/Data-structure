#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) //O(n)
        {
            cin >> a[i];
        }
        int m;
        cin >> m;
        vector<int> b(m);
        for(int i = 0; i < m; i++) //O(m)
        {
            cin >> b[i];
        }
        int x;
        cin >> x;

        for(int i = 0; i < m; i++) //O(m)
        {
            a.insert(a.begin()+i+x, b[i]);
        }

        //printing array A
        for(int i = 0; i < n+m; i++) //O(n+m)
        {
            cout << a[i] <<" ";
        }
        return 0;
    }
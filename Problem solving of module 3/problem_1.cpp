#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    //prefix_sum
    vector<int> pre(n);
    pre[0] = v[0];
    for(int i = 1; i < n; i++)
    {
        pre[i] = pre[i-1] + v[i];
    }
    for(int i = 0; i < n; i++)
    {
        cout << pre[i]<<" ";
    }
}
    int main()
    {
        int n;
        cin >> n;
        solve(n);
        return 0;
    }
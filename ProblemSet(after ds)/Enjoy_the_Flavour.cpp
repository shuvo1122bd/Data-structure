#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int t;
        cin >> t;

        while(t--)
        {
            int n;
            cin >> n;
            int ar[n];
            for(int i = 0; i < n; i++)
            {
                cin >> ar[i];
            }
            vector<long long int> pre(n);
            pre[0] = ar[0];
            for(int i = 1; i < n; i++)
            {
                pre[i] = pre[i-1] + ar[i];
            }
            vector<long long int> v;
            int min = INT_MAX;
            for(int i = 0; i < n;i++)
            {
                v.push_back(abs(pre[n-1] - pre[i] - pre[i]));
                if(v[i] < min)
                {
                    min = v[i];
                }
            }
            // auto min = min_element(v.begin(), v.end());
            
            cout << min<<endl;

        }
        return 0;
    }
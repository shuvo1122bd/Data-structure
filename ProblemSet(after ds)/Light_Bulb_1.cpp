#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int countlit = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                countlit++;
            }
        }

        vector<int> v; // counting unlit in a row
        for (int i = 0; i <= n - k; i++)
        {
            int count = 0;
            for (int j = i; j < i + k; j++)
            {
                if (s[j] == '0')
                {
                    count++;
                }
            }
            v.push_back(count);
        }

        auto it = max_element(v.begin(), v.end());

        if (*it >= k)
        {
            cout << countlit + k << endl;
        }
        else if (*it < k)
        {
            int lit = countlit;
            int diff = k - *it;
            lit = (lit + *it) - diff;
            cout << max(countlit, lit) << endl;
        }
    }

    return 0;
}
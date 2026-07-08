#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        if (n == 2)
        {
            auto min = min_element(ar.begin(), ar.end());
            cout << *min << endl;
        }
        else
        {
            vector<int> a(n, 0);
            for (int i = 0; i < n-1; i++)
            {
                if (ar[i] < ar[i + 1])
                {
                    a[i] = ar[i];
                }
                else
                {
                    a[i] = ar[i + 1];
                }
            }

            auto min2 = max_element(a.begin(), a.end());

            cout << *min2<<endl;
        }
    }
    return 0;
}
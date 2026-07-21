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
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int count = 0;

        for (int pos = 0; pos < n; pos++)
        {
            int lcount = 0;
            int rcount = 0;
            for (int l = pos - 1; l >= 0; l--)
            {
                if (ar[l] < ar[pos])
                    lcount++;
            }
            for (int r = pos + 1; r < n; r++)
            {
                if (ar[r] > ar[pos])
                    rcount++;
            }
            if (rcount == lcount)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
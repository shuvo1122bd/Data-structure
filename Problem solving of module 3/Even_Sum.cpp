#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) //O(t)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++) //O(n)
        {
            cin >> ar[i];
        }
        if (n == 2)
        {
            if (ar[0] % 2 == 0 || ar[1] % 2 == 0)
            {
                cout << "Yes"<<endl;
            }
            else
            {
                cout << "No"<<endl;
            }
        }
        else
        {
            for (int i = 0; i < n; i++) //O(n)
            {
                int sum = 0;
                for (int j = 0; j < n; j++) //O(n)
                {
                    if (j != i)
                    {
                        sum += ar[j];
                    }
                }
                if (sum % 2 == 0)
                {
                    cout << "Yes" << endl;
                    break;
                }
                else if (sum % 2 != 0 && i == n - 1)
                {
                    cout << "No" << endl;
                }
            }
        }
    }

    return 0;
}
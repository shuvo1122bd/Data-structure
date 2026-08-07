#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            while (true)
            {
                if (a > 0)
                {
                    a = a - 1;
                    b = b - 2;
                }
                else if (a == 0)
                {
                    b = b - 1;
                    c = c - 3;
                }

                if (a == 0 && b == 0 && c == 0)
                {
                    cout << "Yes" << endl;
                    break;
                }
                else if (a < 0 || b < 0 || c < 0)
                {
                    cout << "No" << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
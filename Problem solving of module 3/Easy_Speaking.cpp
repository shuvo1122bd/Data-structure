#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)//O(t)
    {

        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n < 4)
        {
            cout << "No" << endl;
        }
        else
        {
            int consonant = 0;
            for (int i = 0; i < n; i++)//O(n)
            {
                if (consonant == 4)
                {
                    break;
                }
                else if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
                {
                    consonant++;
                }
                else
                {
                    consonant = 0;
                }
            }
            if (consonant == 4)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
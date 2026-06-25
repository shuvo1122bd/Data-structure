#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // 1st part
    int space = n - 2;
    int front_space = 0;
    for (int i = 0; i < n / 2; i++)
    {
        for (int k = 0; k < front_space; k++)
        {
            cout << " ";
        }

        cout << "\\";
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        cout << "/";

        cout << endl;

        space -= 2;
        front_space++;
    }

    int x = (n / 2);
    for (int i = 0; i < x; i++)
    {
        cout << " ";
    }

    cout << "X" << endl;

    // 2nd part
    int space2 = 1;
    int front_space2 = (n / 2) - 1;

    for (int i = 0; i < n / 2; i++)
    {
        for (int k = front_space2; k > 0; k--)
        {
            cout << " ";
        }

        cout << "/";
        for (int j = 0; j < space2; j++)
        {
            cout << " ";
        }
        cout << "\\";

        cout << endl;

        space2 += 2;
        front_space2--;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool check_same(list<int> l, list<int> l2)
{
    bool check = true;
    for (int i = 0; i < l.size(); i++)
    {
        if (*next(l.begin(), i) != *next(l2.begin(), i))
        {
            check = false;
            break;
        }
    }
    return check;
}

int main()
{
    list<int> l;
    list<int> l2;
    int val;

    // l input
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        l.push_back(val);
    }
    // l2 input
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        l2.push_back(val);
    }

    bool check = false;
    if (l.size() == l2.size())
    {
        check = check_same(l, l2);
    }

    if (check == false)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int target;
    cin >> target;
    int i = 0;
    int j = n - 1;

    while (i <= j) // binary search
    {
        int mid = (i + j) / 2;
        if (v[mid] == target)
        {
            cout << mid;
            break;
        }
        else if (v[mid] < target)
        {
            i = mid + 1;
        }
        else if (v[mid] > target)
        {
            j = mid - 1;
        }
        if (target == 0)
        {
            cout << "0";
            break;
        }
        else
        {
            cout << i + 1;
        }
    }
    return 0;
}
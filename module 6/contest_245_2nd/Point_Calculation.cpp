#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int won = a * 3;
    int drew = b * 1;
    int lost = c * 0;

    int totalPoint = won + drew + lost;

    cout << totalPoint;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
    
        int deg = n;
        int mint = 0;
    
        while (deg != m)
        {
            mint += deg;
            deg--;
        }
    
        cout << mint<<endl;
    }
    return 0;
}

//time complexity = O(t*(n-m))
//spcae complexity = O(1); constant
// time for solved = 11.47 mint
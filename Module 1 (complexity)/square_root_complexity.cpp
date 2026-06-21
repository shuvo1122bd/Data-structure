#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int n;
        cin >> n;

        int sum = 0;
        for(int i = 1; i <= sqrt(n); i++) //O(sqrt(N))
        {
            sum += i;
        }
        // for(int i = 1; i*i <= n; i++) //O(sqrt(N))
        // {
        //     sum += i;
        // }

        cout << sum;

        return 0;
    }
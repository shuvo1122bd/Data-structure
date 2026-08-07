#include<bits/stdc++.h>
#include <numeric>
using namespace std;

int main()
    {
        int t;
        cin >> t;

        int l, r, k;
        cin >> l >> r >> k;

        int count = 0;
        for(int i = l; i <= r; i++)
        {
            int num = gcd(i, k);
            if(num == 1)
            {
                count++;
            }
        }
        cout << count <<endl;
        
        return 0;
    }
#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int n;
        cin >> n;

        int sum = 0;
        // for(int i = 1; i <= n; i*=2) //O(logN)
        // {
        //     sum += i;
        // }
        for(int i = n; i > 0; i/=2) //O(logN)
        {
            sum += i;
        }

        cout <<sum;
        return 0;
    }
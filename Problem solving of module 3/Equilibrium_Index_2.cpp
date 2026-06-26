#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int sum = 0;
        for(int i = 0; i < n/2; i++)
        {
            sum += v[i];
        }
        int sum2 = 0;
        for(int i = n-1; i > n/2; i--)
        {
            sum2 += v[i];
        }

        if(sum == sum2)
        {
            cout << n/2;
        }
        else{
            cout << "not equlibrium";
        }
        return 0;
    }
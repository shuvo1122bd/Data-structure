#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int n;
        cin >> n;

        int sum = 0;
        for(int i = 1; i <= n; i++) // complexity = O(N)
        {
            for(int i = 1; i <= n; i*=2) // complexity = O(logN)
            {
                sum += i;
            }
        }

        cout << sum;

        return 0;
    }

    /*
    -> There is a nested loop(two loop)
    -> in nested loop, i multiply by 2 everytime.
    -> so, complexity is for nested loop = O(logN)

    Total Complexity = O(N) and O(logN) == O(NlogN)
    */
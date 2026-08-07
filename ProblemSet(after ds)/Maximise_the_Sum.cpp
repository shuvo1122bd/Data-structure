#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int t; cin >> t;

        while(t--)
        {
            vector<int> v(5);
            for(int i = 0; i < v.size(); i++) //taking input
            {
                cin >> v[i];
            }
            int max = INT_MIN;
            int max_idx;
            for(int i = 0; i < 5; i++) //finding max value
            {
                if(v[i] > max)
                {
                    max_idx = i;
                    max = v[i];
                }
            }
            for(int  i = 0; i < 5; i++) // multiply with -1 except max value
            {
                if(i != max_idx)
                {
                    v[i] *= -1;
                }
            }
            long long int sum = 0;
            for(int i = 0; i < v.size(); i++) //sum of all value
            {
                    sum += v[i];
            }
            cout << sum <<endl;
        }
        return 0;

        //Time complexity = O(N);
    }
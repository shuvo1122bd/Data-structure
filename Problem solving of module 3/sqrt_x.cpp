#include<bits/stdc++.h>
using namespace std;

int main()
    {
        vector<int> nums(9);
        for(int i = 0; i < 9; i++)
        {
            cin >> nums[i];
        }


        int n= nums.size();
        vector<int>v(n+1, -1);
        for(int i = 0; i < nums.size(); i++)
        {
            v[nums[i]] = nums[i];
        }

        for(int i = 0; i<v.size(); i++)
        {
            if(v[i] == -1)
            {
                cout << i;
            }
        }
        return 0;
    }
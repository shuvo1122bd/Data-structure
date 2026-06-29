#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int m, n; cin >> m >> n;

        vector<int> nums1(m);
        for(int i = 0; i < nums1.size(); i++)
        {
            cin >> nums1[i];
        }
        vector<int> nums2(n);
        for(int i = 0; i < nums2.size(); i++)
        {
            cin >> nums2[i];
        }
        
        vector<int> merged(n+m);
        merged[0] = INT_MAX;
        for(int i = 0; i < m; i++)
        {
            if(nums1[i] < merged[i])
            {
                merged[i] = nums1[i];
                merged[i+1] = nums2[i];
            }
            
            
        }
        int idx = 0;
        for(int i = n; i < merged.size(); i++)
        {
            if (nums2[idx] <= merged[i])
            {
                merged[i] = merged[i-1];
                merged[i] = nums2[idx];
            }
            idx++;
        }

        for(int i = 0; i < merged.size(); i++)
        {
            cout << merged[i]<<" ";
        }
        
        
        return 0;
    }
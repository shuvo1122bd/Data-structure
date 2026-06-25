#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int n, q;
        cin >> n >>q;

        vector<int> a(n);
        for(int i = 0; i<n;i++) //O(n)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end()); //O(nlogn)

        while(q--) //O(q)
        {
            int val;
            cin >> val;

            int l = 0;
            int r = n-1;

            int flag = 0;
            while(l<=r) //O(logn)
            {
                int mid = (l+r) / 2;
                if(a[mid] == val)
                {
                    flag = 1;
                    break;
                }
                else if(a[mid] < val)
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }

            if(flag == 1)
            {
                cout <<"found"<<endl;
            }
            else
            {
                cout <<"not found"<<endl;
            }
        }
        return 0;
    }
#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++) //O(n)
        {
            cin >> ar[i];
        }
        sort(ar, ar+n); //O(NlogN)
        int q;
        cin >> q;

        while(q--)//O(q)
        {
            int val;
            cin >> val;

            int flag = 0;

            int i = 0;
            int j = n-1;
            while(i <= j) //O(logN)
            {
                int mid = (i + j) / 2;
                if(ar[mid] == val)
                {
                    flag = 1;
                    break;
                }
                else if(ar[mid] > val)
                {
                    j = mid -1;
                }
                else
                {
                    i = mid +1;
                }
            }

            if(flag == 1)
            {
                cout <<"YES"<<endl;
            }
            else
            {
                cout <<"NO"<<endl;
            }
        }
        return 0;
    }
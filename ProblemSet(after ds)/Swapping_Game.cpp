#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int t;
        cin >> t;

        while(t--)
        {
            int n, k;
            cin >> n>>k;
    
            vector<int> v(n);
            for(int i = 0; i < n; i++)
            {
                cin >> v[i];
            }
            vector<int> v2;
            v2 = v;
    
            // bool flag = false;
    
            while(true)
            {
                int count = 0;
                for(int i = 0; i < n-1; i++)
                {
                    int x = v2[i] + v2[i+1];
                    if(x <= k && v2[i] > v2[i+1])
                    {
                        swap(v2[i], v2[i+1]);
                        count++;
                    }
                }
                if(count == 0)
                {
                    break;
                }
                else
                {
                    v = v2;
                }
            }
    
            bool flag = false;
            for(int i = 0; i < n; i++)
            {
                if(v[i] < v2[i])
                {
                    break;
                }
                else if(v2[i] < v[i])
                {
                    flag = true;
                    break;
                }
            }
    
            if(flag == true)
            {
                for(int i = 0; i < n; i++)
                {
                    cout << v2[i]<<" ";
                }
                cout <<endl;
            }
            else
            {
            for(int i = 0; i < n; i++)
                {
                    cout << v[i]<<" ";
                }
                cout <<endl;
            }

        }
        return 0;
    }
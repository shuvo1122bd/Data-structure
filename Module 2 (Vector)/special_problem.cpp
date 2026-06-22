#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int t; //O(1)
        cin >> t;

        while(t--) 
        {
            int n, m;
            cin >> n >> m;
    
            string a;
            cin >> a;
            string b;
            cin >> b;
    
            for(int i = 0; i < n; i++)
            {
                if(a[i] != b[i])
                {
                    break;
                }
                else
                {
                    cout << a[i];
                }
            }
            cout <<endl;
        }
        
        return 0;
    }
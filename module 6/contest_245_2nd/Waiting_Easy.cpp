#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int t;
        cin >>t;


        while(t--)
        {
            int n;
            cin >> n;
    
            int* ar = new int(n);
            for(int i = 0; i < n; i++)
            {
                cin >> ar[i];
            }
    
            int time = 0;
            for(int i = 0; i < n; i++)
            {
                for(int j = i+1; j < n; j++)
                {
                    if(ar[i] > ar[j])
                    {
                        time = ar[i] - ar[j];
                        ar[i] = 0;
                    }
                }
            }
    
            cout << time<<endl;

        }
        return 0;
    }
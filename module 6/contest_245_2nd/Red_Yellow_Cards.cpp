#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int t;
        cin >> t;

        while(t--)
        {
            int r, y;
            cin >> r >> y;
    
            if(r == 0)
            {
                int div = y / 2;
                cout << div<<endl;
            }
            else if(y == 0 && y < 2)
            {
                cout << r;
            }
            else
            {
                int count = 0;
                int yellow = y;
                for(int i = 1; i <= r; i++)
                {
                    count++;
                    yellow--;
                }
                if(yellow >= 2)
                {
                    int div = yellow / 2;
                    count+= div;
                }
                cout << count<<endl;
            }
        }

        return 0;
    }
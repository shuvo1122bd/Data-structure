#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < v.size(); i++) //O(n)
        {
            cin >>v[i];
        }

        int count = 0;
        for(int i = 0; i < v.size(); i++) //O(n)
        {
            int value = v[i] + 1;
            auto it = find(v.begin(), v.end(), value); //O(n)
            if(it != v.end())
            {
                count++;
            }
        }
        cout << count;
        return 0;
    }

    //Overall Complexity = O(n*n);
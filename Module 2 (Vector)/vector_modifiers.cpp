#include<bits/stdc++.h>
using namespace std;

int main()
    {
        vector<int> v = {10, 20, 10, 10, 30, 40, 50};
        vector <int> v2 = {100, 200, 300};
        // v2 = v;

        // v.insert(v.begin()+2, 200);

        // v.insert(v.begin()+1, v2.begin()+2,v2.end());

        // v.erase(v.begin()+1, v.end()-2);

        replace(v.begin(), v.end(), 10, 800); // replace(start, end, value, replace);

        auto it = find(v.begin(), v.end(), 10);

        if(it == v.end())
        {
            cout <<"not found";
        }
        else
        {
            cout <<"found";
        }

        // for(int x : v) //range based loop
        // {
        //     cout << x <<" ";
        // }
        return 0;
    }
#include<bits/stdc++.h>
using namespace std;

int main()
    {
        // list<int>l(5, 5);
        // list<int> l2 (l);
        // for(auto it = l.begin(); it!= l.end(); it++)
        // {
        //     cout << *it <<" ";
        // }

        // int ar[] = {1, 2, 3, 4};
        vector<int> v = {10, 20, 30, 40, 50};
        list<int> l(v.begin(), v.end());
        // l.clear();

        // if(l.empty())
        // {
        //     cout << "empty";
        // }
        // else
        // {
        //     cout <<"NO empty";
        // }
        // cout << l.max_size();

        l.resize(10,500);
        for(int val : l)
        {
            cout << val <<endl;
        }
        return 0;
    }
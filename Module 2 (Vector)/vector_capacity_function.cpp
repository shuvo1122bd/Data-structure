#include<bits/stdc++.h>
using namespace std;

int main()
    {
        vector<int> v;
        // cout <<v.size(); //for checking size
        
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(30);
        v.push_back(30);
        v.resize(10, 600);
        
        // v.pop_back();
        // v.clear();
        for(int i=0;i<v.size();i++)
        {
            cout <<v[i]<<" ";
        }

        // cout <<v.capacity();

        // cout<<v.capacity();
        
        return 0;
    }
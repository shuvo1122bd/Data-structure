#include<bits/stdc++.h>
using namespace std;

int main()
    {
        //vector <data_type> vector_name; //vector initilaization

        // vector<int> v; //type 1
        // vector <int> v(100); //type2

        // vector<int>v(10, -1); //type 3

        //copy another vector
        // vector<int> v2 (v); //type 4

        //Copy array to vector
        // int ar[5] = {1, 2, 3, 4, 5};
        // vector<int>v(ar, ar+5); //type 5

        vector<int> v = {1, 2, 3, 4}; //don't need to tell the size

        for(int  i = 0; i < v.size(); i++)
        {
            cout << v[i]<<" ";
        }
        return 0;
    }
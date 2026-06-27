#include<bits/stdc++.h>
using namespace std;

int main()
    {
        long long int n;
        cin >> n;

        long long int total = n *(n+1) / 2; //O(1) complexity

        cout << total;
        return 0;
    }
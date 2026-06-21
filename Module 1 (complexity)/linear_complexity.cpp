#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int n; //O(1)
        cin >> n; //O(1)

        int sum = 0;

        for(int i = 1; i <= n; i++) //O(N)
        {
            sum += i; //O(1)
        }

        cout << sum <<" "; //O(1)

        //same output but complexity is = O(1)
        int total = n* (n+1) / 2; 

        cout <<total;
        
        return 0; //O(1)
    }

    //Overall time complexity is = O(N)
    // Beacuse its depend on user input(n).
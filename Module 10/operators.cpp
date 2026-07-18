#include<bits/stdc++.h>
using namespace std;

int main()
    {
        list<int> l = {10, 20, 10, 15, 50, 30};

        // l.remove(20); //remove specific element from the list

        // l.sort(); //sort in ascending order
        // l.sort(greater<int>());
        // l.unique(); //remove duplicate value in sort list
        l.reverse(); //reverse the whole list
        for(int val : l)
        {
            cout << val << " ";
        }
        return 0;
    }
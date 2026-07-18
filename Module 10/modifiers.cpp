#include<bits/stdc++.h>
using namespace std;

int main()
    {
        list<int> l = {10, 20, 30, 40, 50, 10};
        // list<int>l2;
        // l2 = l; //assign value
        // l.push_back(100); //add element at tail
        // l.push_front(200); //add element at head

        // l.pop_back(); //remove element from tail
        // l.pop_front(); //remove element from head

        // l.insert(next(l.begin(), 3), 100); //insert at any position

        // cout << *next(l.begin(), 4); //access the ith element

        // l.erase(next(l.begin(), 3));

        // replace(l.begin(), l.end(), 10, 20);

        auto it = find(l.begin(),l.end(), 100);
        if(it == l.end())
        {
            cout <<"NOt Found";
        }
        else
        {
            cout << "FOUND";
        }
        for(int val : l)
        {
            cout << val <<" ";
        }
    return 0;
    }
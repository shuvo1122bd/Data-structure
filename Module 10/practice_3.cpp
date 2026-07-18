#include<bits/stdc++.h>
using namespace std;

bool check_palindrome(list<int>l)
{
    bool check = true;
    int i = 0;
    int j = l.size()-1;

    while( i < j)
    {
        if(*next(l.begin(), i) != *next(l.begin(), j))
        {
            check = false;
            break;
        }
        i++;
        j--;
    }
    return check;
}

int main()
    {
        list<int> l;
        int val;
        while(true)
        {
            cin >> val;
            if(val == -1)
            {
                break;
            }
            l.push_back(val);
        }

        bool check = check_palindrome(l);

        if(check == true)
            cout << "YES";
        else
            cout <<"NO";
        return 0;
    }
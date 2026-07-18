#include<bits/stdc++.h>
using namespace std;

void print_forward_backward(list<int>l)
{
    for(int val : l)
    {
        cout << val << " ";
    }
    cout <<endl;
    for(int i = l.size()-1; i >= 0; i--)
    {
        cout << *next(l.begin(), i)<<" ";
    }
    cout <<endl;
}

int main()
    {
        list<int>l;

        int q;
        cin >> q;

        while(q--)
        {
            int x, v;
            cin >> x >> v;
    
            if(x == 0)
            {
                l.push_front(v);
                print_forward_backward(l);
            }
            else if(x == l.size())
            {
                l.push_back(v);
                print_forward_backward(l);
            }
            else if( x > l.size())
            {
                cout << "Invalid"<<endl;
            }
            else
            {
                l.insert(next(l.begin(), x), v);
                print_forward_backward(l);
            }
        }
        
        return 0;
    }
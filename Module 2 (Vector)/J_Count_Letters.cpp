#include<bits/stdc++.h>
using namespace std;

int main()
    {
        string s; cin >> s;
        vector<int>words(26);
        for(int i = 0; i < s.size(); i++)
        {
            int idx = s[i] - 'a';
            words[idx]++;
        }

        for(int i = 0; i < words.size(); i++)
        {
            if(words[i] > 0)
            {
                char ch = i + 'a';
                cout << ch <<" "<< ":" <<" "<<words[i]<<endl;
            }
        }
        return 0;
    }
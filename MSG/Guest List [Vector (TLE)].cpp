//https://open.kattis.com/submissions/17583179
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<string> names;
    for(int i=0;i<n;++i)
    {
        char c;
        string s;
        cin >> c >> s;
        if(c=='?')
        {
            if(find(names.begin(),names.end(),s)!=names.end()) cout << "Jebb\n";
            else cout << "Neibb\n";
        }
        else
        {
            if(c=='+') names.push_back(s);
            else erase(names.begin(),names.end(),s);
        }
    }
    return 0;
}

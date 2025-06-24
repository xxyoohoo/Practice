//https://open.kattis.com/submissions/17546213
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,z,x,y;
    string s;
    cin >> n;
    map<int,string> mp;
    for (int i=0;i<n;++i)
    {
        cin >> s >> z;
        mp[z]=s;
    }
    cin >> x;
    while (x--)
    {
        cin >> y;
        auto it=mp.upper_bound(y);
        if (it == mp.begin()) cout << ":(" << '\n';
        else
        {
            --it;
            cout << it->second << '\n';
        }
    }
    return 0;
}

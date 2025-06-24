//https://open.kattis.com/submissions/17595753
//https://open.kattis.com/problems/99problems2
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q, a, x, y;
    cin >> n >> q;
    multiset<int> s;
    for(int i=0; i < n; ++i) {cin >> a; s.insert(a);}
    while(q--)
    {
        cin >> x >> y;
        if(x==1)
        {
            auto it=s.upper_bound(y);
            if(it !=s.end())
            {
                cout << *it << '\n';
                s.erase(it);
            }
            else cout << -1 << '\n';
        }
        else
        {
            auto it=s.upper_bound(y);
            if(it==s.begin()) cout << -1 << '\n';
            else
            {
                --it;
                cout << *it << '\n';
                s.erase(it);
            }
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        int x, pos=0, ans=-1;
        cin >> x;
        vector<int> s(x);
        vector<pair<int,int>> d;
        queue<pair<int,int>> q; //ind,. steps
        vector<bool> used(x,0);
        for (int i=0;i<x;++i) cin >> s[i];
        for (int i=0;i<x;++i) d.push_back({s[i],i});
        sort(d.begin(),d.end());
        q.push({0,1});
        used[0]=1;
        while (!q.empty())
        {
            auto[i,step]=q.front();
            q.pop();
            if (i==x-1)
            {
                ans=step;
                break;
            }
            while (pos<x && d[pos].first<=2LL*s[i]) //if can fall
            {
                int idx=d[pos].second;
                if (!used[idx])
                {
                    used[idx]=1;
                    q.push({idx,step+1});
                }
                ++pos;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

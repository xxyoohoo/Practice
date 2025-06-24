//https://open.kattis.com/submissions/17461582
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,h,ans;
    cin >> n;
    while(n--)
    {
        cin >> x;
        vector<int> v;
        ans=0;
        for(int i=0;i<20;++i)
        {
            cin >> h;
            auto it=upper_bound(v.begin(),v.end(),h);
            ans+=(v.end()-it);
            v.insert(it,h);
        }
        cout << x << ' ' << ans << '\n';
    }
    return 0;
}

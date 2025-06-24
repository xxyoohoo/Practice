#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, y, ans=0;
    cin >> n;
    vector<int> v(n);
    for (int i=0;i<n;++i) cin >> v[i];
    sort(v.begin(), v.end());
    for (int x=0;x<=n;++x)
    {
        int cnt = v.end()-lower_bound(v.begin(),v.end(),x);
        if (cnt>=x) ans=x;
    }
    cout << ans;
    return 0;
}

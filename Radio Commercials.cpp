//https://open.kattis.com/challenge/vfbzhfb6/submissions/17570742
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,cost,ans=0,cur=0;
    cin >> n >> cost;
    vector<int> v(n);
    for(int i=0;i<n;++i) cin >> v[i];
    for(int i=0;i<n;++i)
    {
        cur+=v[i]-cost;
        if(cur<0) cur=0;
        if(cur>ans) ans=cur;
    }
    cout << ans << endl;
    return 0;
}

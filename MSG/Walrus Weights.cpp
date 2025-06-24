//https://open.kattis.com/challenge/d3u7ugsk/submissions/17562759
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,ans=0,md=999999;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; ++i) cin >> v[i];
    vector<bool> dp(2000+1,false);
    dp[0]=true;
    for (int i:v) 
    {
        for (int j=2000;j>= i;--j)
        {
            if (dp[j-i]) dp[j]=true;
        }
    }
    for (int i=0;i<=2000;++i)
    {
        if (dp[i])
        {
            int d=abs(i-1000);
            if (d<md || (d==md && i>ans))
            {
                md=d;
                ans=i;
            }
        }
    }
    cout << ans << endl;
    return 0;
}

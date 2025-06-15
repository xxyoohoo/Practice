//https://open.kattis.com/submissions/17562528
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long long n,x,ans=1,m=1000000007LL;
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin >> x;
        x%=m;
        ans%=m;
        ans=(ans*x)%m;
    }
    cout << ans;
    return 0;
}

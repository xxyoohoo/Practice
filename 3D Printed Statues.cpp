//https://open.kattis.com/submissions/17593467
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans=n;
    for (int i=0;i<100;++i)
    {
        int p=1<<i, days=(n+p-1)/p;
        ans=min(ans,i+days);
    }
    cout << ans << '\n';
    return 0;
}

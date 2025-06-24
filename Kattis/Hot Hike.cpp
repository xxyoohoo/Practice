//https://open.kattis.com/submissions/16891503
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[1000],m=100000000000,x=0;
    cin >> n;
    for(int i=0;i<n;++i) cin >> a[i];
    for(int i=0;i<n-2;++i)
    {
        if(max(a[i],a[i+2])<m)
        {
            m=max(a[i],a[i+2]);
            x=i;
        }
    }
    cout << x+1 << ' ' << m;
    return 0;
}

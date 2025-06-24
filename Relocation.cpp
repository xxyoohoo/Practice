//https://open.kattis.com/submissions/15515282
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long c,x,y,n;
    cin >> c >> n;
    vector<long long> a(c+1,0);
    for(int i=1;i<=c;++i) cin >> a[i];
    for(int i=1;i<=n;++i)
    {
        cin >> x;
        if(x==1)
        {
            cin >> x >> y;
            a[x] = y;
        }
        else if(x==2)
        {
            cin >> x >> y;
            cout << abs(a[x]-a[y]) << endl;
        }
    }
    return 0;
}

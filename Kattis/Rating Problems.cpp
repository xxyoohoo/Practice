//https://open.kattis.com/submissions/17593448
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y, mn[100],mx[100];
    double mnans=0.0, mxans=0.0;
    cin >> x >> y;
    for(int i=0;i<y;++i) {cin >> mn[i]; mx[i]=mn[i];}
    for(int i=y;i<x;++i) {mn[i]=-3; mx[i]=3;}
    for(int i=0;i<x;++i)
    {
        mnans+=mn[i];
        mxans+=mx[i];
    }
    cout << setprecision(4) << mnans/x << ' ' << mxans/x;
    return 0;
}

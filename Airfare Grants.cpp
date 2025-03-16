//https://open.kattis.com/submissions/16897004
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,mn,mx;
    cin >> x;
    cin >> y;
    mx=y;
    mn=y;
    for(int i=0;i<x-1;++i)
    {
        cin >> y;
        if(y>mx) mx=y;
        if(y<mn) mn=y;
    }
    if(mn-(mx/2)>0) cout << mn-(mx/2);
    else cout << 0;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, ans=0;
    cin >> n;
    while(n--)
    {
        int x, y;
        cin >> x >> y;
        if(y>x) ++ans;
    }
    cout << ans;
    return 0;
}

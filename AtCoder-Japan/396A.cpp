//https://atcoder.jp/contests/abc396/submissions/64239142
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[101];
    memset(a,0,sizeof(a));
    cin >> n >> a[0] >> a[1];
    for(int i=2;i<n;++i)
    {
        cin >> a[i];
        if(a[i-1]==a[i] && a[i-2]==a[i]) {cout << "Yes"; return 0;}
    }
    cout << "No";
    return 0;
}
